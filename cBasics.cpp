//---------------------------------------------------------------------------
#pragma hdrstop

#include "cBasics.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
//static TMemo* mInfo;
//static TProgressBar* pbJob;
//---------------------------------------------------------------------------
cBasics::cBasics()
	{
	}
//---------------------------------------------------------------------------
cBasics::~cBasics()
	{
	}
//---------------------------------------------------------------------------
//------------ Memo ---------------------------------------------------------
//---------------------------------------------------------------------------
void cBasics::MemoSet(TMemo* memo)
	{
	mInfo = memo;
	}
//---------------------------------------------------------------------------
void cBasics::MemoPrint(TMemo* memo, char* msg, ...)
	{
	if (memo == NULL) return;
	char    buffer[512];
	int     nsiz;
	va_list argptr;

	va_start(argptr, msg);
	nsiz = vsnprintf(0, 0, msg, argptr);
	if (nsiz >= sizeof(buffer)-2) nsiz = sizeof(buffer)-2;

	vsnprintf(buffer, nsiz, msg, argptr);
	buffer[nsiz] = 0;

	memo->Lines->Add(buffer);
	va_end(argptr);
	}
//---------------------------------------------------------------------------
void cBasics::MemoPrint(char* msg, ...)
	{
	if (mInfo == NULL) return;
	MemoPrint(mInfo, msg);
	}
//---------------------------------------------------------------------------
//------------ ProgressBar --------------------------------------------------
//---------------------------------------------------------------------------
void cBasics::ProgressSet(TProgressBar* bar)
	{
	pbJob = bar;
	}
//---------------------------------------------------------------------------
void cBasics::ProgressBegin(int max, int pos) //pos ist vorbesetzt mit 0
	{
	if (pbJob == NULL) return;
	pbJob->Position = pos;
	pbJob->Max = max;
	}
//---------------------------------------------------------------------------
void cBasics::ProgressTick(int tick) //tick ist vorbesetzt mit 1
	{
	if (pbJob == NULL) return;
	pbJob->Position += tick;
	}
//---------------------------------------------------------------------------
void cBasics::ProgressEnd(int endwert) //endwert ist vorbsetzt mit 0
	{
	if (pbJob == NULL) return;
	if (endwert == 0)
		pbJob->Position = pbJob->Max;
	else
		pbJob->Position = endwert;
	}
//---------------------------------------------------------------------------
//------------ Image --------------------------------------------------------
//---------------------------------------------------------------------------
void cBasics::ImageSet(TImage* pic)
	{
	img = pic;
	}
//---------------------------------------------------------------------------
void cBasics::ImagePaint(TColor cl)
	{
	img->Canvas->Brush->Color = cl;
	img->Canvas->FillRect(Rect(0, 0, img->Picture->Width, img->Picture->Height));
	}
//---------------------------------------------------------------------------

