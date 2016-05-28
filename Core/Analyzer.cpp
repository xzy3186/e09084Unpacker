//    This software is Copyright by the Board of Trustees of Michigan State
//    University (c) Copyright 2014. 
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
//     Author:
//       Jeromy Tompkins
//	     NSCL
//	     Michigan State University
//	     East Lansing, MI 48824-1321
//
#include <config.h>
#include "FragmentIndex.h"
#include "Analyzer.h"
#include "S800.h"
#include "S800Event.h"
#include "Hira.h"
#include "HiraProcess.h"

#include <iostream>
#include <iomanip>
#include <cstring>

#include <TFile.h>
#include <TTree.h>
#include <TObject.h>
#include <TString.h>

#include "MergedInfo.h"

// Instantiate the beast
Analyzer gAnalyzer;

using namespace std;

Analyzer::Analyzer()
   : nevent(0),
	badevent(0),
	goodevent(0),
	hira_fired(0),
	s800_fired(0)
{
   f = new TFile("analyzer.root","RECREATE");
   tree = new TTree("tree","tree");
   cout<<tree<<endl;
   tree->SetDirectory(0);

	_hira = new Hira;
	//cout<<"come here"<<endl;
	//cout<<"pointer to Hira class is "<<_hira<<endl;
	hira_proc = new HiraProcess(_hira);
	s800 = new S800;
	s800event = new S800Event;
	tree->Branch("hira", &_hira, 320000);
	tree->Branch("s800event", &s800event, 320000);
	tree->BranchRef();
}

Analyzer::~Analyzer()
{
   //cout<<"come here"<<endl;

   cout<<endl;
   f->cd();
   tree->Write();
   tree->SetDirectory(0);
   f->Close();
   cout<<"finished, with "<<goodevent<<" good events and "<<badevent<<" bad events."<<endl;
   delete tree;
   delete f;
}

void Analyzer::operator()(FragmentIndex& index)
{
   //if(nevent>5){
   //   return;
   //}

   if(nevent%1000==0){
      cout<<"Events proccessed: "<<nevent<<"\r"<<flush;
      //cout<<"Events proccessed: "<<nevent<<endl;
   };

	//cout<<"come here"<<endl;
	++nevent;

   bool foundStack = false;
   bool filltree = false;
   long long int stacktstamp = 0;
   long long int s800tstamp = 0;
   int s800count=0;
   int stackcount=0;
	hira_fired=0;
	s800_fired=0;

   FragmentIndex::iterator it=index.begin();
   FragmentIndex::iterator end=index.end();
   int NumOfFrag=0;
   while ( it != end) {
      //found VMUSB Stack fragment
      if (it->s_sourceId == MergedInfo::STACK) {
         uint32_t ritem_type = computeType(it->s_itemhdr+2);
         if (ritem_type == 30) {
            stacktstamp = it->s_timestamp;
            foundStack = true;
            uint16_t *point = it->s_itembody+5; //pointing to the starting word (b0fe a51c)
				if(*point!=0xb0fe || *(point+1)!=0xa51c){
					filltree = false;
					continue;
				}
				point = point + 2; //pointing to the xlm marker (1ff3, 1ff4, etc)
            //cout<<"Timestamp is: "<<stacktstamp<<endl;
            //cout<<"first body data is: "<<std::hex<<*point<<std::dec<<endl;
            filltree = hira_proc->HiraUnpack(point);
            hira_proc->SetTS(stacktstamp);
				//cout<<"\r"<<flush;
            if(filltree){
               hira_proc->SimpleAnalysis();
					hira_fired=1;
            }
            ++stackcount;
         }
      }else if(it->s_sourceId == MergedInfo::S800) {
         uint32_t ritem_type = computeType(it->s_itemhdr+2);
         if (ritem_type == 30) {
            s800tstamp = it->s_timestamp;
            uint16_t *point = it->s_itembody;
				uint16_t evtlength = *(point-1)-1;//self included
				s800->Clear();
				int error = s800->DecodeS800(point, evtlength);
				if(error){
					cout<<"come error"<<endl;
					filltree = false;
					continue;
			   }else{
					filltree = true;
					s800_fired=1;
				}
				s800->SetTS(s800tstamp);
				s800event->SetS800(*s800);
            //cout<<"event length: "<<evtlength<<endl;
			}
		}
      NumOfFrag++;
      ++it;
   }
   //std::cout<<"Number of fragment: "<<NumOfFrag<<std::endl;

   if (filltree) {
      //cout<<"come here"<<endl;
      //cout<<"TMult = "<<TMult<<", TNumTeleFired = "<<TNumTeleFired<<endl;
      tree->SetDirectory(f);
      tree->Fill();
		goodevent++;
		//cout<<"good event"<<endl;
   }else{
		badevent++;
		//cout<<"bad event"<<endl;
	}
}
