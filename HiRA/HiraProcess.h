#ifndef __HIRAPROCESS_H
#define __HIRAPROCESS_H

#include "Hira.h"
#include "stdint.h"
#include "caen.h"
#include "TDC1190.h"

class HiraProcess
{
	public:
		Hira *hira;
		//for mapping from (motherboard, chipboard) to (telescope, face)
		int ChipTeleMap[4][15];
		int ChipFaceMap[4][15];
		//for si calibration
		float sislope[14][3][32];
		float sioffset[14][3][32];
		//for mapping from (adc, channel) to (telescope, csi)
		int AdcTeleMap[2][32];
		int AdcCsiMap[2][32];
		//for csi calibration
		float csislope[14][4];
		float csioffset[14][4];

	public:
		HiraProcess(Hira* _hira){
			hira = _hira;
			readChipTeleMap((char*)"../input-files/ChipTeleMap.dat");
			readCalibSiTable((char*)"../input-files/CalibEdE.dat");
			readAdcCsiMap((char*)"../input-files/AdcCsiMap.dat");
			readCalibCsiTable((char*)"../input-files/CalibCsI.dat");
			//cout<<"come here 2"<<endl;
		}
		~HiraProcess(){return;}

		bool HiraUnpack(uint16_t* point);
		void SetTS(long long int timestamp);
		void SimpleAnalysis();
		void readChipTeleMap(char* filename);
		void readAdcCsiMap(char* filename);
		void readCalibSiTable(char* filename);
		void readCalibCsiTable(char* filename);
};

#endif
