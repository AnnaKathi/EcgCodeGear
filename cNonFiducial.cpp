//---------------------------------------------------------------------------
#pragma hdrstop

#include "cNonFiducial.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
extern TProgressBar* pbJob;
//---------------------------------------------------------------------------
cNonFiducial::cNonFiducial()
	{
	}
//---------------------------------------------------------------------------
cNonFiducial::~cNonFiducial()
	{
	}
//---------------------------------------------------------------------------
bool cNonFiducial::findFeatures()
	{
	MemoPrint("(nonfid) begin search for features..."); //Test Klassenkonzept
	buildDerivates();
	MemoPrint("(nonfid) Non-Fiducial Features found"); //Test Klassenkonzept
	return true;
	}
//---------------------------------------------------------------------------


