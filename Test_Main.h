//---------------------------------------------------------------------------
#ifndef Test_MainH
#define Test_MainH
//---------------------------------------------------------------------------
#include "cAlgX.h"
#include "cAlgY.h"
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
#include <Dialogs.hpp>
#include <IniFiles.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TfmMain : public TForm
{
private:
	TIniFile*		Ini;
	cAlgX*			AlgX;
	cAlgY*			AlgY;

	void 			Print(char* msg, ...);
	bool			Layout();



__published:	// IDE-verwaltete Komponenten
	TMemo *mInfo;
	TPanel *pInfo;
	TMemo *mHead;
	TBevel *Bevel1;
	TTimer *tStartup;
	TOpenDialog *OpenDialog;
	TPanel *pnFile;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label5;
	TLabel *Label4;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TSpeedButton *btInputfile;
	TEdit *edInputfile;
	TEdit *edBisIdx;
	TEdit *edVonIdx;
	TEdit *edBisMsec;
	TEdit *edVonMsec;
	TEdit *edMaxWert;
	TEdit *edMinWert;
	TPanel *pnPreprocessing;
	TSplitter *splittPreprocessing;
	TLabel *laPreprocessing;
	TPanel *pnAlgorithms;
	TPanel *pnAlgHeader;
	TLabel *laAlgorithms;
	TPanel *pnAlgLeft;
	TPanel *pnAlgRight;
	TPanel *pnAlgLeftTop;
	TPanel *pnAlgRightTop;
	TPanel *pnAlgLeftBottom;
	TPanel *pnAlgRightBottom;
	TBevel *Bevel2;
	TLabel *laAlg3;
	TLabel *laAlg4;
	TPanel *Panel1;
	TLabel *laAlg2;
	TPanel *Panel2;
	TButton *btAlg2Start;
	TPanel *Panel3;
	TImage *img2;
	TProgressBar *pb2;
	TMemo *memo2;
	TPanel *Panel4;
	TLabel *laAlg1;
	TPanel *Panel5;
	TButton *btAlg1Start;
	TPanel *Panel6;
	TImage *img1;
	TMemo *memo1;
	TProgressBar *pb1;
	void __fastcall FormKeyPress(TObject *Sender, char &Key);
	void __fastcall btInputfileClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall tStartupTimer(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall splittPreprocessingMoved(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall btAlg1StartClick(TObject *Sender);
	void __fastcall btAlg2StartClick(TObject *Sender);

public:
	__fastcall TfmMain(TComponent* Owner);
	__fastcall TfmMain::~TfmMain();
};
//---------------------------------------------------------------------------
extern PACKAGE TfmMain *fmMain;
//---------------------------------------------------------------------------
#endif
