//---------------------------------------------------------------------------
#ifndef cDatastreamH
#define cDatastreamH
//---------------------------------------------------------------------------
#include <StdCtrls.hpp>
#include <ComCtrls.hpp>
#include <stdio.h>
//---------------------------------------------------------------------------
#include "cCsv.h"
//---------------------------------------------------------------------------
//! Klasse cDatastream, Verarbeitung des EKG-Signals
/*! Die Klasse cDatastream �bernimmt die Verarbeitung des EKG-Signals wie einlesen
 *  und schneiden und bietet dar�berhinaus statistische Werte zum Signal an:\n
 *  <ul><li>index von...bis</li>
 *  <li>Millisekunden von...bis</li>
 *  <li>Amplitude von...bis</li></ul>
 */
class cDatastream : public cCsv
	{
private:
	cCsv*			Csv;

public:
	cDatastream();
	~cDatastream();

	bool	setupStream();
	bool	MovingAverage();
	//-----------------------------------------------------------------------
	//------------ Funktionalit�ten -----------------------------------------
	//-----------------------------------------------------------------------

	//-----------------------------------------------------------------------
	//------------ getter und setter ----------------------------------------
	//-----------------------------------------------------------------------
	};
//---------------------------------------------------------------------------
#endif
