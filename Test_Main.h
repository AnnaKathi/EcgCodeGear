//---------------------------------------------------------------------------
#ifndef Test_MainH
#define Test_MainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
#include "cAlgX.h"
#include "cAlgY.h"
//---------------------------------------------------------------------------
class TfmMain : public TForm
{
private:
	void 		Print(char* msg, ...);

	cAlgX*		AlgX;
	cAlgY*		AlgY;


__published:	// IDE-verwaltete Komponenten
	TButton *btAuthX;
	TMemo *mInfo;
	TLabel *Label1;
	TEdit *edFile;
	TButton *btAlgY;
	void __fastcall btAuthXClick(TObject *Sender);
	void __fastcall btAlgYClick(TObject *Sender);
	void __fastcall FormKeyPress(TObject *Sender, char &Key);

public:
	__fastcall TfmMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfmMain *fmMain;
//---------------------------------------------------------------------------
#endif
