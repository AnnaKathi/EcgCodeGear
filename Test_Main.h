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



__published:	// IDE-verwaltete Komponenten
	TMemo *mInfo;
	TPanel *pInfo;
	TMemo *mHead;
	TBevel *Bevel1;
	TPanel *pnMain;
	TSplitter *splitterMain;
	TPanel *pnFile;
	TLabel *Label2;
	TEdit *edInputfile;
	TLabel *Label3;
	TLabel *Label5;
	TEdit *edBisIdx;
	TEdit *edVonIdx;
	TLabel *Label4;
	TLabel *Label6;
	TEdit *edBisMsec;
	TEdit *edVonMsec;
	TLabel *Label7;
	TLabel *Label8;
	TEdit *edMaxWert;
	TEdit *edMinWert;
	TSpeedButton *btInputfile;
	TBevel *Bevel2;
	TTimer *tStartup;
	TOpenDialog *OpenDialog;
	TButton *btAlgY;
	TButton *btAuthX;
	TProgressBar *pbJob;
	void __fastcall btAuthXClick(TObject *Sender);
	void __fastcall btAlgYClick(TObject *Sender);
	void __fastcall FormKeyPress(TObject *Sender, char &Key);
	void __fastcall btInputfileClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall tStartupTimer(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);

public:
	__fastcall TfmMain(TComponent* Owner);
	__fastcall TfmMain::~TfmMain();
};
//---------------------------------------------------------------------------
extern PACKAGE TfmMain *fmMain;
//---------------------------------------------------------------------------
#endif
