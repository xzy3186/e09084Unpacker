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


#ifndef ANALYZER_H
#define ANALYZER_H

#include <stdint.h>
#include <vector>
#include <string>
#include <fstream>
//#include "S800Event.h"
//#include "Hira.h"
//#include "HiraProcess.h"

class S800;
class S800Event;
class Hira;
class HiraProcess;
class TObject;
class TFile;
class TTree;
class FragmentIndex;

class Analyzer
{
   private:
      // data structures:

      TFile* f;
      TTree* tree;
      S800* s800;
      S800Event* s800event;
      Hira* _hira;
      HiraProcess* hira_proc;
      int hira_fired;
      int s800_fired;

      int nevent;  
      int badevent;
      int goodevent;

   public:
      Analyzer();
      ~Analyzer();

      void operator() (FragmentIndex& index);

   private:
      uint32_t computeType(uint16_t* ptr) 
      {
         uint32_t low=0, hi=0;
         low = *ptr; ++ptr;
         hi = *ptr; 

         return ((hi<<16)|low);
      }
};

#endif
