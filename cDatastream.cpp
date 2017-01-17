//---------------------------------------------------------------------------
#pragma hdrstop

#include "cDatastream.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
cDatastream::cDatastream()
	{
	}
//---------------------------------------------------------------------------
cDatastream::~cDatastream()
	{
	}
//---------------------------------------------------------------------------
bool cDatastream::setupStream()
	{
	openFile();
	MemoPrint("(stream) EKG-Daten erzeugt"); //Test Klassenkonzept
	return true;
	}
//---------------------------------------------------------------------------
bool cDatastream::MovingAverage()
	{
	MemoPrint("(stream) EKD-Daten geglättet"); //Test Klassenkonzept
	return true;
	}
//---------------------------------------------------------------------------

