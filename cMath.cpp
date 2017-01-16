//---------------------------------------------------------------------------
#pragma hdrstop

#include "cMath.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
cMath::cMath()
	{
	Stream = new cDatastream();
	}
//---------------------------------------------------------------------------
cMath::~cMath()
	{
	delete Stream;
	}
//---------------------------------------------------------------------------
bool cMath::buildDerivates(TMemo* mInfo)
	{
	Stream->setupStream(mInfo);
	Stream->MovingAverage(mInfo);
	MemoPrint(mInfo, "(math) Ableitungen gebildet"); //Test Klassenkonzept
	return true;
	}
//---------------------------------------------------------------------------
