//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include <stdio.h>

#include "Test_Main.h"
//---------------------------------------------------------------------------
#define MIN_WIDTH  500
#define MIN_HEIGHT 400
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

	String file = String(path) + "\\EcgFramework.ini";
	Ini = new TIniFile(file);

	AlgX = new cAlgX();
	AlgY = new cAlgY();
	}
//---------------------------------------------------------------------------
__fastcall TfmMain::~TfmMain()
	{
	delete Ini;
	delete AlgX;
	delete AlgY;
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

	int w = Ini->ReadInteger("Form", "Width", 1000);
	if (w < 500) w = 500;
	else if (w > Screen->WorkAreaWidth) w = Screen->WorkAreaWidth;
	fmMain->Width = w;

	int h = Ini->ReadInteger("Form", "Height", 750);
	if (h < 400) h = 400;
	else if (h > Screen->WorkAreaHeight) h = Screen->WorkAreaHeight;
	fmMain->Height = h;

	int l = Ini->ReadInteger("Form", "Left", 0);
	if (l < 0) l = 0;
	else if ((l+fmMain->Width) > Screen->WorkAreaWidth)
		l = (Screen->WorkAreaWidth - fmMain->Width);
	fmMain->Left = l;

	int t = Ini->ReadInteger("Form", "Top", 0);
	if (t < 0) t = 0;
	else if ((t+fmMain->Height) > Screen->WorkAreaHeight)
		t = (Screen->WorkAreaHeight - fmMain->Height);
	fmMain->Top = t;

	w = Ini->ReadInteger("Form", "pnPreprocessing", 100);
	if (w < 100) w = 100;
	else if (w > (fmMain->Width * 0.9)) w = (fmMain->Width * 0.9);
	pnPreprocessing->Width = w;

	Layout();
	Print("Framework initialisiert");
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

	Ini->WriteInteger("Form", "Width",  fmMain->Width);
	Ini->WriteInteger("Form", "Height", fmMain->Height);
	Ini->WriteInteger("Form", "Left",	fmMain->Left);
	Ini->WriteInteger("Form", "Top",	fmMain->Top);
	
	Ini->WriteInteger("Form", "pnPreprocessing", pnPreprocessing->Width);
	Ini->UpdateFile();
	}
//---------------------------------------------------------------------------
/***************************************************************************/
/******************   Funktionen   *****************************************/
/***************************************************************************/
//---------------------------------------------------------------------------
bool TfmMain::Layout()
	{
	if (fmMain->Width  < MIN_WIDTH)  fmMain->Width  = MIN_WIDTH;
	if (fmMain->Height < MIN_HEIGHT) fmMain->Height = MIN_HEIGHT;
	
	//Überschriften neu ausrichten
	int l = (pnPreprocessing->Width - laPreprocessing->Width)/2;
	if (l < 0) l = 0;
	laPreprocessing->Left = l;

	l = (pnAlgorithms->Width - laAlgorithms->Width)/2;
	if (l < 0) l = 0;
	laAlgorithms->Left = l;

	//Algorithmen-Fenster neu ausrichten
	int w = pnAlgorithms->Width;
	pnAlgLeft->Width = w/2;

	int h = pnAlgLeft->Height;
	pnAlgLeftTop->Height  = h/2;
	pnAlgRightTop->Height = h/2;

	//Algorithmen-Fenster neu ausrichten
	laAlg1->Left = (pnAlgLeftTop->Width     - laAlg1->Width) / 2;
	laAlg2->Left = (pnAlgLeftBottom->Width  - laAlg2->Width) / 2;
	laAlg3->Left = (pnAlgRightTop->Width    - laAlg3->Width) / 2;
	laAlg4->Left = (pnAlgRightBottom->Width - laAlg4->Width) / 2;

	return true;
	}
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
void __fastcall TfmMain::btInputfileClick(TObject *Sender)
	{
	if (!OpenDialog->Execute()) return;
	edInputfile->Text = OpenDialog->FileName;
	}
//---------------------------------------------------------------------------
void __fastcall TfmMain::splittPreprocessingMoved(TObject *Sender)
	{
	Layout();
	}
//---------------------------------------------------------------------------
void __fastcall TfmMain::FormResize(TObject *Sender)
	{
	if (!Layout())
    	;
	}
//---------------------------------------------------------------------------
void __fastcall TfmMain::btAlg1StartClick(TObject *Sender)
	{
	//Algorithmus X
	AlgX->MemoSet(memo1);
	AlgX->ProgressSet(pb1);
	AlgX->ImageSet(img1);
	AlgX->Authenticate();
	AlgX->TestPB();
	}
//---------------------------------------------------------------------------
void __fastcall TfmMain::btAlg2StartClick(TObject *Sender)
	{
	//Algorithmus Y
	AlgY->MemoSet(memo2);
	AlgY->ProgressSet(pb2);
	AlgY->ImageSet(img2);
	AlgY->Authenticate();
	AlgY->TestPB();
	}
//---------------------------------------------------------------------------

