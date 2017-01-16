//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include <stdio.h>

#include "Test_Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfmMain *fmMain;
//---------------------------------------------------------------------------
__fastcall TfmMain::TfmMain(TComponent* Owner)
	: TForm(Owner)
	{
	char path[MAX_PATH];
	strcpy(path, Application->ExeName.c_str());
	char* pt = strrchr(path, '\\');
	if (pt != 0)
		*pt = 0;

	String file = String(path) + "\\CalcEcg2.ini";
	Ini = new TIniFile(file);
	}
//---------------------------------------------------------------------------
__fastcall TfmMain::~TfmMain()
	{
	delete Ini;
	}
//---------------------------------------------------------------------------
void TfmMain::Print(char* msg, ...)
	{
	char    buffer[512];
	int		nsiz;
	va_list argptr;

	va_start(argptr, msg);
	nsiz = vsnprintf(0, 0, msg, argptr);
	if (nsiz >= sizeof(buffer)-2) nsiz = sizeof(buffer)-2;

	vsnprintf(buffer, nsiz, msg, argptr);
	buffer[nsiz] = 0;

	mInfo->Lines->Add(buffer);
	va_end(argptr);
	}
//---------------------------------------------------------------------------
void __fastcall TfmMain::FormShow(TObject *Sender)
	{
	tStartup->Enabled = true;
	}
//---------------------------------------------------------------------------
void __fastcall TfmMain::tStartupTimer(TObject *Sender)
	{
	tStartup->Enabled = false;
	edInputfile->Text = Ini->ReadString("CalcEcg", "Inputfile", "");

	edVonIdx->Text  = (String)Ini->ReadInteger("CalcEcg", "VonIdx",  0);
	edBisIdx->Text  = (String)Ini->ReadInteger("CalcEcg", "BisIdx",  0);
	edVonMsec->Text = (String)Ini->ReadInteger("CalcEcg", "VonMsec", 0);
	edBisMsec->Text = (String)Ini->ReadInteger("CalcEcg", "BisMsec", 0);
	edMinWert->Text = (String)Ini->ReadInteger("CalcEcg", "MinWert", 0);
	edMaxWert->Text = (String)Ini->ReadInteger("CalcEcg", "MaxWert", 0);

	//iEcg->Left = 0;
	//iEcg->Top  = 0;
	//AdjustImages();
	//btRead->SetFocus();
	}
//---------------------------------------------------------------------------
void __fastcall TfmMain::FormClose(TObject *Sender, TCloseAction &Action)
	{
	Ini->WriteString("CalcEcg", "Inputfile", edInputfile->Text);

	Ini->WriteInteger("CalcEcg", "VonIdx",  	 edVonIdx->Text.ToIntDef(0));
	Ini->WriteInteger("CalcEcg", "BisIdx",  	 edBisIdx->Text.ToIntDef(0));
	Ini->WriteInteger("CalcEcg", "VonMsec",  	 edVonMsec->Text.ToIntDef(0));
	Ini->WriteInteger("CalcEcg", "BisMsec",  	 edBisMsec->Text.ToIntDef(0));
	Ini->WriteInteger("CalcEcg", "MinWert",  	 edMinWert->Text.ToIntDef(0));
	Ini->WriteInteger("CalcEcg", "MaxWert",  	 edMaxWert->Text.ToIntDef(0));

	Ini->UpdateFile();
	}
//---------------------------------------------------------------------------
/***************************************************************************/
/******************   Funktionen   *****************************************/
/***************************************************************************/
//---------------------------------------------------------------------------
/***************************************************************************/
/**************   Meldungen vom Formular   *********************************/
/***************************************************************************/
//---------------------------------------------------------------------------
void __fastcall TfmMain::FormKeyPress(TObject *Sender, char &Key)
	{
	if (Key == VK_ESCAPE)
		{
		Key = 0;
		Close();
		}
	}
//---------------------------------------------------------------------------
void __fastcall TfmMain::btAuthXClick(TObject *Sender)
	{
	//Test Klassenkonzept
	AlgX = new cAlgX();
	Print("-------------------------------------------------------");
	AlgX->Authenticate(mInfo);

	delete AlgX;
	}
//---------------------------------------------------------------------------
void __fastcall TfmMain::btAlgYClick(TObject *Sender)
	{
	//Test Klassenkonzept
	AlgY = new cAlgY();
	AlgY->setBar(pbJob);
	Print("-------------------------------------------------------");
	AlgY->Authenticate(mInfo);
	AlgY->TestPB();
	delete AlgY;
	}
//---------------------------------------------------------------------------
void __fastcall TfmMain::btInputfileClick(TObject *Sender)
	{
	if (!OpenDialog->Execute()) return;
	edInputfile->Text = OpenDialog->FileName;
	}
//---------------------------------------------------------------------------

