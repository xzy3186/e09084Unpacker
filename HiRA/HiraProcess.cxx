#include "HiraProcess.h"

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>

using namespace std;

const int CHNeedInvert[3][14] = {0,0,0,0,0,0,0,0,0,0,0,0,0,1, //DE strip need to be inverted
                                 0,0,1,1,1,1,1,1,0,0,1,1,1,1, //EF strip need to be inverted
                                 1,0,1,1,1,1,1,1,0,0,1,1,1,1}; //EB strip need to be inverted
const int ENNeedInvert[3][14] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0, //DE energy need to be inverted
                                 0,0,0,0,1,0,0,0,0,0,0,0,0,0, //EF energy need to be inverted
                                 0,0,0,0,1,0,0,0,0,0,0,0,0,0}; //EB energy need to be inverted

bool HiraProcess::HiraUnpack(uint16_t* point){
   uint16_t marker;
   uint16_t *nextMB = point;
   int NstripsReadXLM[4];
   int NstripsReadFADC[4];
	int mult=0;
   bool result = false;
   hira->Clear();
   for(int iMB=0; iMB<4; iMB++){
      point = nextMB;
      marker = *point++;
      uint16_t chipWords = *point;
      nextMB = point + chipWords + 2;
      if (chipWords == 0){
         NstripsReadXLM[iMB] = 0;
         continue;
      }
      point += 2;
      NstripsReadXLM[iMB] = *point;
      if (NstripsReadXLM[iMB] > 650) {
			//cout<<"ts = "<<hira->ts<<", channel = "<<NstripsReadXLM[iMB]<<endl;;
			return false; // bad buffer
		}
      point += 5;
      //start filling fired channel into array
      for (int istrip = 0; istrip < NstripsReadXLM[iMB]; istrip++){
         uint16_t id = *point++;
         uint16_t chipNum = (id>>5) & 0xff;
         uint16_t chanNum = id & 0x1f;
         if(chipNum%2 == 0){
            if(iMB != 3){
               chanNum = 31 - 2*chanNum - 1;
            } else {
               chanNum = chanNum + 16;
            }
            chipNum = chipNum / 2;
         } else {
            if(iMB != 3){
               chanNum = 31 - 2*chanNum;
            }
            chipNum = chipNum / 2 + 1;
         }
         hira->si->TMB.push_back(iMB);
         hira->si->TCB.push_back(chipNum);
         hira->si->TCH.push_back(chanNum);
			int tele = ChipTeleMap[iMB][chipNum];
			int face = ChipFaceMap[iMB][chipNum];
			//if(iMB==0&&chipNum==10){
			//	cout<<"tele = "<<tele<<", face = "<<face<<endl;
			//}
         hira->si->TTele.push_back(tele);
         hira->si->TFace.push_back(face);
         if(CHNeedInvert[face][tele]==1){
            hira->si->TStrip.push_back(chanNum);
         }else{
            hira->si->TStrip.push_back(31-chanNum);
         }
			mult++;
      }
   }
   point = nextMB;
   //marker for fadc
   marker = *point++;
   //cout<<"fadc marker: "<<hex<<marker<<dec<<endl;
   //something following the marker, but I don't know the meaning. So skiped...
   int16_t some_strange = *point++;
   //cout<<hex<<some_strange<<endl;;
	mult=0;
   for(int iMB=0; iMB<4; iMB++){
      NstripsReadFADC[iMB] = *point++;
      //cout<<NstripsReadFADC[iMB]<<endl;
      if(NstripsReadFADC[iMB]!=NstripsReadXLM[iMB]) return false;
      point++;
      for (int  istrip = 0; istrip < NstripsReadFADC[iMB]; istrip++){
         uint16_t time = *point++;
         uint16_t energy = *point++;
			int tele = hira->si->TTele[mult];
			int face = hira->si->TFace[mult];
			int strip = hira->si->TStrip[mult];
         if(ENNeedInvert[face][tele]==1){
				energy = energy & 0x3fff;
         }else{
            energy = 16383-(energy & 0x3fff);
         }
			hira->si->TEneRaw.push_back(energy);
			hira->si->TTime.push_back(time & 0x3fff);
         if(energy>0 && energy<16383){
            hira->si->TNormal.push_back(1);
         }else{
            hira->si->TNormal.push_back(0);
         }
			float _energy = sislope[tele][face][strip]*energy+sioffset[tele][face][strip];
			hira->si->TEnergy.push_back(_energy);
			mult++;
      }
      uint16_t is_aaaa = *point++;
		//cout<<"The last word of the "<<iMB<<" fadc is "<<hex<<is_aaaa<<dec<<endl;
		if(is_aaaa!=0xaaaa){
			return false;
		}
      //cout<<hex<<is_aaaa<<endl;
   }
	hira->si->TMult = mult;
   //cout<<"caen adc marker: "<<hex<<*point<<dec<<endl;
	mult=0;
   for(int iadc=0; iadc<2; iadc++){
      uint16_t f3 = *point;
      uint16_t f4 = *(point+1);
      if(f3 == 0xffff && f4 == 0xffff){
         point = point + 2;
			
         continue;
      }
      caen ADC;
      ADC.number = 0;
      //cout<<"The first word of the "<<iadc+1<<"st/rd ADC is "<<hex<<*point<<" "<<*(point+1)<<dec<<endl;
      point = ADC.read(point);//call the reading function defined in caen.h
		if(point == 0){
			return false;
		}
      //cout<<"The first word after reading the "<<iadc+1<<"st/rd ADC is "<<hex<<*point<<" "<<*(point+1)<<dec<<endl;
      for(int i=0; i<ADC.number; i++){
         if(ADC.underflow[i]) continue;
         int ch, ene;
         if(!ADC.overflow[i]){
            ch = ADC.channel[i];
            ene = ADC.data[i];
         }else{
            ch = ADC.channel[i];
            ene = 4095;
         }
         //mapping into csi array
         int tele = AdcTeleMap[iadc][ch];
         int csi = AdcCsiMap[iadc][ch];
         if(tele>=0 && csi>=0){
            hira->csi->TEneRaw.push_back(ene);
				hira->csi->TADC.push_back(iadc);
				hira->csi->TCH.push_back(ch);
				hira->csi->TTele.push_back(tele);
				hira->csi->TCsI.push_back(csi);
				if(ene>0 && ene<4096){
					hira->csi->TNormal.push_back(1);
				}else{
					hira->csi->TNormal.push_back(0);
				}
				float _ene = ene*csislope[tele][csi]+csioffset[tele][csi];
				hira->csi->TEnergy.push_back(_ene);
				mult++;
         }
      }
      f3 = *point;
      f4 = *(point+1);
		if(f3!=0xffff || f4!=0xffff){
			return false;
		}
      point = point + 2;
   }
	hira->csi->TMult=mult;
   //cout<<"The first word after reading ADC is "<<hex<<*point<<" "<<*(point+1)<<dec<<endl;
   uint16_t f3 = *point;
   uint16_t f4 = *(point+1);
   if(f3 == 0xffff && f4 == 0xffff){//to see if there is v1190 stuff
         point = point + 2;
   }else{
      TDC1190 tdc(1,0,1);
      point = tdc.read(point);//reading it, but not going to do with it
      point = point + 2;
   }
   //cout<<"The first word after reading TDC is "<<hex<<*point<<" "<<*(point+1)<<dec<<endl;
   for(int iqdc=0; iqdc<2; iqdc++){
      uint16_t f3 = *point;
      uint16_t f4 = *(point+1);
      if(f3 == 0xffff && f4 == 0xffff){
         point = point + 2;
         continue;
      }
      caen QDC;
      QDC.number = 0;
      point = QDC.read(point);
		if(point==0){
			return false;
		}
      //cout<<"The first word after reading the "<<iqdc+1<<"st/rd QDC is "<<hex<<*point<<" "<<*(point+1)<<dec<<endl;
      for(int i=0; i<QDC.number; i++){
         if(QDC.underflow[i]) continue;
         int ch, ene;
         if(!QDC.overflow[i]){
            ch = QDC.channel[i];
            ene = QDC.data[i];
         }else{
            ch = QDC.channel[i];
            ene = 4095;
         }
         hira->mcp->TQDC[iqdc][ch] = ene;
      }
      f3 = *point;
      f4 = *(point+1);
		if(f3!=0xffff || f4!=0xffff){
			return false;
		}
      point = point + 2;
   }
   hira->mcp->TMCP[0][0] = hira->mcp->TQDC[0][16];
   hira->mcp->TMCP[0][1] = hira->mcp->TQDC[0][14];
   hira->mcp->TMCP[0][2] = hira->mcp->TQDC[0][20];
   hira->mcp->TMCP[0][3] = hira->mcp->TQDC[0][22];
   hira->mcp->TMCP[0][4] = hira->mcp->TQDC[1][30];
   hira->mcp->TMCP[0][5] = hira->mcp->TQDC[1][ 2];
   hira->mcp->TMCP[0][6] = hira->mcp->TQDC[1][ 4];
   hira->mcp->TMCP[0][7] = hira->mcp->TQDC[1][ 6];
   hira->mcp->TMCP[1][0] = hira->mcp->TQDC[0][24];
   hira->mcp->TMCP[1][1] = hira->mcp->TQDC[0][26];
   hira->mcp->TMCP[1][2] = hira->mcp->TQDC[0][28];
   hira->mcp->TMCP[1][3] = hira->mcp->TQDC[0][30];
   hira->mcp->TMCP[1][4] = hira->mcp->TQDC[1][ 8];
   hira->mcp->TMCP[1][5] = hira->mcp->TQDC[1][10];
   hira->mcp->TMCP[1][6] = hira->mcp->TQDC[1][12];
   hira->mcp->TMCP[1][7] = hira->mcp->TQDC[1][14];
   //cout<<"The first word after reading QDC is "<<hex<<*point<<" "<<dec<<endl;

   if(*point == 0xe0fe){
      result = true;
   }
   return result;
}

void HiraProcess::SetTS(long long int timestamp){
	hira->ts = timestamp;
}

void HiraProcess::readChipTeleMap(char* filename){
   // Read the input file defining the mapping between the ASICs and
   // spectific HiRA telescopes/Si.

   int  towernum,slot,chip,tele;
   char face[3];
   string fa;

   // initialize
   for(int i=0; i<4; i++){
      for(int j=0; j<15; j++){
         ChipTeleMap[i][j] = -1;
         ChipFaceMap[i][j] = -1;
      }
   }

   // Try to open the input file.
   //ifstream file(filename);
   ifstream file(filename);
   if(file.is_open()){
      cout << "-->CHira:: Reading Chip to Tele Mapping from file: " << filename << endl;
   } else {
      cerr << "-->CHira:: Error!!! Couldn't find file: " << filename << endl; return;
   }

   char line[300];

   int hira_fill;
   file >> hira_fill;
   file.getline(line,300); //read rest of hira_fill line
   if(!hira_fill){
      cout << "-->CHira:: HIRA PARAMETERS WILL NOT BE FILLED!!! (MAYBE?)\n";
   } else {
      cout << "-->CHira:: HiRA parameters will be filled. . ." << endl;
   }

   // Read lines until we find the format header
   bool foundHdr = false;
   while(!foundHdr){
      if(file.eof()) break;
      file.getline(line,300);
      if(std::strncmp("#MB",line,3)==0) foundHdr = true;
   }
   if(!foundHdr) {
      cerr << "-->CHira:: Error in ChipTeleMap file. Did not find format header.\n";
      // Should return something here.
   }

   // Read the input mapping
   cout << "--------------------------" << endl;
   cout << "  MB Chip Slot Tele Face  " << endl;
   cout << "--------------------------" << endl;
   file.getline(line,300); //read input line
   while(!file.eof()){
      sscanf(line,"%i %i %i %i %s",&towernum,&chip,&slot,&tele,&face);

      file.getline(line,300);
      printf("%4i %4i %4i %4i %4s\n",towernum,chip,slot,tele,face);
      fa = face;

      ChipTeleMap[towernum-1][chip] = tele;
      if (fa == "de") ChipFaceMap[towernum-1][chip] = 0;
      if (fa == "ef") ChipFaceMap[towernum-1][chip] = 1;
      if (fa == "eb") ChipFaceMap[towernum-1][chip] = 2;
   }
   file.close();
}

void HiraProcess::readCalibSiTable(char* filename){
   int  tele,face,strip;
   float slope,offset;

   // initialize
   for(int i=0; i<14; i++){
      for(int j=0; j<3; j++){
         for(int k=0; k<32; k++){
            sislope[i][j][k]=1;
            sioffset[i][j][k]=0;
         }
      }
   }
   ifstream file(filename);
   if(file.is_open()){
      cout << "-->CHira:: Reading Calib parameters from file: " << filename << endl;
   } else {
      cerr << "-->CHira:: Error!!! Couldn't find file: " << filename << endl; return;
   }
   char line[300];

   bool foundHdr = false;
   while(!foundHdr){
      if(file.eof()) break;
      file.getline(line,300);
      if(std::strncmp("#Tele",line,4)==0) foundHdr = true;
   }
   if(!foundHdr) {
      cerr << "-->CHira:: Error in calibration file. Did not find format header.\n";
      // Should return something here.
   }
   // Read the input calibration
   cout << "--------------------------------" << endl;
   cout << "  Tele Face Strip Slope Offset  " << endl;
   cout << "--------------------------------" << endl;
   file.getline(line,300); //read input line
   while(!file.eof()){
      sscanf(line,"%i %i %i %f %f",&tele,&face,&strip,&slope,&offset);
      //printf("%4i %4i %4i %f %f\n",tele,face,strip,slope,offset);

      file.getline(line,300);
      sislope[tele][face][strip]=slope;
      sioffset[tele][face][strip]=offset;
   }
   file.close();
}

void HiraProcess::readCalibCsiTable(char* filename){
   int  tele,csi;
   float slope,offset;

   // initialize
   for(int i=0; i<14; i++){
      for(int j=0; j<4; j++){
			csislope[i][j]=1;
			csioffset[i][j]=0;
      }
   }
   ifstream file(filename);
   if(file.is_open()){
      cout << "-->CHira:: Reading Calib parameters from file: " << filename << endl;
   } else {
      cerr << "-->CHira:: Error!!! Couldn't find file: " << filename << endl; return;
   }
   char line[300];

   bool foundHdr = false;
   while(!foundHdr){
      if(file.eof()) break;
      file.getline(line,300);
      if(std::strncmp("#Tele",line,4)==0) foundHdr = true;
   }
   if(!foundHdr) {
      cerr << "-->CHira:: Error in calibration file. Did not find format header.\n";
      // Should return something here.
   }
   // Read the input calibration
   cout << "-----------------------" << endl;
   cout << "  Tele Csi Slope Offset" << endl;
   cout << "-----------------------" << endl;
   file.getline(line,300); //read input line
   while(!file.eof()){
      sscanf(line,"%i %i %f %f",&tele,&csi,&slope,&offset);
      //printf("%4i %4i %f %f\n",tele,csi,slope,offset);

      file.getline(line,300);
      csislope[tele][csi]=slope;
      csioffset[tele][csi]=offset;
   }
   file.close();
}

void HiraProcess::readAdcCsiMap(char* filename){
   // Read the input file defining the mapping between the ASICs and
   // spectific HiRA telescopes/Si.

   int slot,ch,tele,csi;

   // initialize
   for(int i=0; i<2; i++){
      for(int j=0; j<32; j++){
         AdcTeleMap[i][j] = -1;
         AdcCsiMap[i][j] = -1;
      }
   }

   // Try to open the input file.
   //ifstream file(filename);
   ifstream file(filename);
   if(file.is_open()){
      cout << "-->CHira:: Reading Adc to Tele Mapping from file: " << filename << endl;
   } else {
      cerr << "-->CHira:: Error!!! Couldn't find file: " << filename << endl; return;
   }

   char line[300];

   int hira_fill;
   file >> hira_fill;
   file.getline(line,300); //read rest of hira_fill line
   if(!hira_fill){
      cout << "-->CHira:: HIRA PARAMETERS WILL NOT BE FILLED!!! (MAYBE?)\n";
   } else {
      cout << "-->CHira:: HiRA parameters will be filled. . ." << endl;
   }

   // Read lines until we find the format header
   bool foundHdr = false;
   while(!foundHdr){
      if(file.eof()) break;
      file.getline(line,300);
      if(std::strncmp("Slot#",line,4)==0) foundHdr = true;
   }
   if(!foundHdr) {
      cerr << "-->CHira:: Error in AdcCsiMap file. Did not find format header.\n";
      // Should return something here.
   }

   // Read the input mapping
   cout << "--------------------" << endl;
   cout << "  Slot Ch Tele Csi  " << endl;
   cout << "--------------------" << endl;
   file.getline(line,300); //read input line
   while(!file.eof()){
      sscanf(line,"%i %i %i %i",&slot,&ch,&tele,&csi);

      file.getline(line,300);
      printf("%4i %4i %4i %4i\n",slot-11,ch,tele,csi);

      AdcTeleMap[slot-11][ch] = tele;
      AdcCsiMap[slot-11][ch] = csi;
   }
   file.close();
}

void HiraProcess::SimpleAnalysis(){
   float simax[14][3], csimaxraw[14], csimax[14];
   int simaxch[14][3], csimaxch[14], tele_fired[14], csi_fired[14];
   for(int i=0; i<14; i++){
      tele_fired[i]=0;
      csi_fired[i]=0;
      simax[i][0] = 0.1;//0.1 MeV as threshold
      simax[i][1] = 1;//1 MeV as threshold
      simax[i][2] = 1;//1 MeV as threshold
		csimaxraw[i]=120;
		csimax[i]=-1;
		csimaxch[i]=-1;
      for(int j=0; j<3; j++){
         simaxch[i][j] = -1;
      }
   }

   for(int i=0; i<hira->si->TMult; i++){
      if(hira->si->TNormal[i]!=1){
         continue;
      }
      int tele = hira->si->TTele[i];
      int face = hira->si->TFace[i];
      int ch = hira->si->TStrip[i];
		float energy = hira->si->TEnergy[i];
      if(energy > simax[tele][face] && energy < 25){//set maximum energy to be 25 MeV for both dE and E
         tele_fired[tele] = 1;
         simax[tele][face] = energy;
         simaxch[tele][face] = ch;
      }
   }

   for(int i=0; i<hira->csi->TMult; i++){
      if(hira->csi->TNormal[i]!=1){
         continue;
      }
      int tele = hira->csi->TTele[i];
      int _csi = hira->csi->TCsI[i];
		float energy = hira->csi->TEneRaw[i];
      if(energy > csimaxraw[tele]){
			csi_fired[tele] = 1;
         csimaxraw[tele] = energy;
         csimax[tele] = hira->csi->TEnergy[i];
         csimaxch[tele] = _csi;
      }
   }

   hira->reco->TNumTeleFired=0;
   for(int i=0; i<14; i++){
      if(tele_fired[i]==1){
         hira->reco->TTeleFired.push_back(i);
         if(csi_fired[i]==0){
            hira->reco->TIfCsIFired.push_back(0);
				hira->reco->TCsIMax.push_back(-1);
				hira->reco->TCsIMaxCh.push_back(-1);
         }else{
            hira->reco->TIfCsIFired.push_back(1);
				hira->reco->TCsIMax.push_back(csimax[i]);
				hira->reco->TCsIMaxCh.push_back(csimaxch[i]);
         }
         hira->reco->TdEMax.push_back(simax[i][0]);
         hira->reco->TdEMaxCh.push_back(simaxch[i][0]);
         hira->reco->TEFMax.push_back(simax[i][1]);
         hira->reco->TEFMaxCh.push_back(simaxch[i][1]);
         hira->reco->TEBMax.push_back(simax[i][2]);
         hira->reco->TEBMaxCh.push_back(simaxch[i][2]);
         hira->reco->TNumTeleFired++;
      }
   }
}
