//---------------------------------------------------------------------------
#ifndef cDatastreamH
#define cDatastreamH
//---------------------------------------------------------------------------
#include <StdCtrls.hpp>
#include <stdio.h>
//---------------------------------------------------------------------------
#include "Basics.h"
#include "cCsv.h"
//---------------------------------------------------------------------------
//! Klasse cDatastream, Verarbeitung des EKG-Signals
/*! Die Klasse cDatastream übernimmt die Verarbeitung des EKG-Signals wie einlesen
 *  und schneiden und bietet darüberhinaus statistische Werte zum Signal an:\n
 *  <ul><li>index von...bis</li>
 *  <li>Millisekunden von...bis</li>
 *  <li>Amplitude von...bis</li></ul>
 */
class cDatastream
	{
private:
	cCsv*		Csv;

public:
	cDatastream();
	~cDatastream();

	bool		setupStream(TMemo* mInfo);
	bool		MovingAverage(TMemo* mInfo);
	};
//---------------------------------------------------------------------------
#endif
