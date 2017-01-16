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
	Print("-------------------------------------------------------");
	AlgY->Authenticate(mInfo);
	delete AlgY;
	}
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
