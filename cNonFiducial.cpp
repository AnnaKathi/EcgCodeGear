//---------------------------------------------------------------------------
#pragma hdrstop

#include "cNonFiducial.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
cNonFiducial::cNonFiducial()
	{
	Math = new cMath();
	}
//---------------------------------------------------------------------------
cNonFiducial::~cNonFiducial()
	{
	delete Math;
	}
//---------------------------------------------------------------------------
bool cNonFiducial::findFeatures(TMemo* mInfo)
	{
	Math->buildDerivates(mInfo);
	MemoPrint(mInfo, "(nonfid) Non-Fiducial Features found"); //Test Klassenkonzept
	return true;
	}
//---------------------------------------------------------------------------


