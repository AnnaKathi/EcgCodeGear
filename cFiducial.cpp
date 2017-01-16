//---------------------------------------------------------------------------
#pragma hdrstop

#include "cFiducial.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
cFiducial::cFiducial()
	{
	Math = new cMath();
	}
//---------------------------------------------------------------------------
cFiducial::~cFiducial()
	{
	delete Math;
	}
//---------------------------------------------------------------------------
bool cFiducial::findFeatures(TMemo* mInfo)
	{
	Math->buildDerivates(mInfo);
	MemoPrint(mInfo, "(fid) Fiducial Features found"); //Test Klassenkonzept
	return true;
	}
//---------------------------------------------------------------------------
