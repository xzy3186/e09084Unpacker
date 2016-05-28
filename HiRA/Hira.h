#ifndef __HIRA_H
#define __HIRA_H

#include <iostream>
#include <vector>
#include "TObject.h"
#include "TString.h"

class Si : public TObject {
	public:
		Si(){
			TMult=0;
			TEneRaw.clear();
			TTime.clear();
			TEnergy.clear();
			TNormal.clear();
			TMB.clear();
			TCB.clear();
			TCH.clear();
			TTele.clear();
			TFace.clear();
			TStrip.clear();
		}
		~Si(){
			Clear();
		};
		void Clear(){
			TMult=0;
			TEneRaw.clear();
			TTime.clear();
			TEnergy.clear();
			TNormal.clear();
			TMB.clear();
			TCB.clear();
			TCH.clear();
			TTele.clear();
			TFace.clear();
			TStrip.clear();
		}
	public:
		int TMult;
		std::vector<int> TEneRaw;
		std::vector<int> TTime;
		std::vector<float> TEnergy;
		std::vector<int> TNormal;
		std::vector<int> TMB;
		std::vector<int> TCB;
		std::vector<int> TCH;
		std::vector<int> TTele;
		std::vector<int> TFace;
		std::vector<int> TStrip;

		ClassDef(Si, 1);
};

class CsI : public TObject {
	public:
		CsI(){
			TMult=0;
			TEneRaw.clear();
			TEnergy.clear();
			TNormal.clear();
			TADC.clear();
			TCH.clear();
			TTele.clear();
			TCsI.clear();
		}
		~CsI(){
			Clear();
		};
		void Clear(){
			TMult=0;
			TEneRaw.clear();
			TEnergy.clear();
			TNormal.clear();
			TADC.clear();
			TCH.clear();
			TTele.clear();
			TCsI.clear();
		}
	public:
		int TMult;
		std::vector<int> TEneRaw;
		std::vector<float> TEnergy;
		std::vector<int> TNormal;
		std::vector<int> TADC;
		std::vector<int> TCH;
		std::vector<int> TTele;
		std::vector<int> TCsI;

		ClassDef(CsI, 1);
};

class Reconstruction : public TObject {
	public:
		Reconstruction(){
			TNumTeleFired = 0;
			TTeleFired.clear();
			TIfCsIFired.clear();
			TCsIMax.clear();
			TCsIMaxCh.clear();
			TdEMax.clear();
			TdEMaxCh.clear();
			TEFMax.clear();
			TEFMaxCh.clear();
			TEBMax.clear();
			TEBMaxCh.clear();
		}
		~Reconstruction(){
			Clear();
		};
		void Clear(){
			TNumTeleFired = 0;
			TTeleFired.clear();
			TIfCsIFired.clear();
			TCsIMax.clear();
			TCsIMaxCh.clear();
			TdEMax.clear();
			TdEMaxCh.clear();
			TEFMax.clear();
			TEFMaxCh.clear();
			TEBMax.clear();
			TEBMaxCh.clear();
		}
	public:
		int TNumTeleFired;
		std::vector<int> TTeleFired;
		std::vector<int> TIfCsIFired;
		std::vector<float> TCsIMax;
		std::vector<int> TCsIMaxCh;
		std::vector<float> TdEMax;
		std::vector<int> TdEMaxCh;
		std::vector<float> TEFMax;
		std::vector<int> TEFMaxCh;
		std::vector<float> TEBMax;
		std::vector<int> TEBMaxCh;

		ClassDef(Reconstruction, 1);
};

class Mcp : public TObject {
	public:
		Mcp(){
			for(int i=0; i<2; i++){
				for(int j=0; j<32; j++){
					TQDC[i][j]=-1;
				}
				for(int j=0; j<8; j++){
					TMCP[i][j]=-1;
				}
			}
		}
		~Mcp(){
			Clear();
		}
		void Clear(){
			for(int i=0; i<2; i++){
				for(int j=0; j<32; j++){
					TQDC[i][j]=-1;
				}
				for(int j=0; j<8; j++){
					TMCP[i][j]=-1;
				}
			}
		}
	public:
		int TQDC[2][32];
		int TMCP[2][8];

		ClassDef(Mcp, 1);
};

class Hira : public TObject {
	public:
		Hira(){
			ts = -1;
			si = new Si();
			csi = new CsI();
			reco = new Reconstruction();
			mcp = new Mcp();
		}
		~Hira(){
			Clear();
		};

		void Clear(){
			ts = -1;
			si->Clear();
			csi->Clear();
			reco->Clear();
			mcp->Clear();
		}
	public:
		Si* si;
		CsI* csi;
		Reconstruction* reco;
		Mcp* mcp;
		long long int ts;

		ClassDef(Hira, 1);
};

#endif
