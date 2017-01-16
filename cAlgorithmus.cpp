//---------------------------------------------------------------------------
#pragma hdrstop

#include "cAlgorithmus.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
void cAlgorithmus::ProgressBarSet(TProgressBar* pb)
	{
	pbJob = pb;
	}
//---------------------------------------------------------------------------
bool cAlgorithmus::ProgressBegin(int max, int pos)
	{
	if (pbJob == NULL) return false;
	pbJob->Visible = true;
	pbJob->Position = pos;
	pbJob->Max = max;
	return true;
	}
//---------------------------------------------------------------------------
bool cAlgorithmus::ProgressTick(int tick)
	{
	if (pbJob == NULL) return false;
	pbJob->Position += tick;
	return true;
	}
//---------------------------------------------------------------------------
bool cAlgorithmus::ProgressEnd()
	{
	if (pbJob == NULL) return false;
	pbJob->Position = pbJob->Max;
	return true;
	}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------

