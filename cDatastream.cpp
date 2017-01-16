//---------------------------------------------------------------------------
#pragma hdrstop

#include "cDatastream.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
cDatastream::cDatastream()
	{
	Csv = new cCsv();
	}
//---------------------------------------------------------------------------
cDatastream::~cDatastream()
	{
	delete Csv;
	}
//---------------------------------------------------------------------------
bool cDatastream::setupStream(TMemo* mInfo)
	{
	Csv->openFile(mInfo);
	MemoPrint(mInfo, "(stream) EKG-Daten erzeugt"); //Test Klassenkonzept
	return true;
	}
//---------------------------------------------------------------------------
bool cDatastream::MovingAverage(TMemo* mInfo)
	{
	MemoPrint(mInfo, "(stream) EKD-Daten geglättet"); //Test Klassenkonzept
	return true;
	}
//---------------------------------------------------------------------------

