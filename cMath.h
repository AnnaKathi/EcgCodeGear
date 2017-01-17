//---------------------------------------------------------------------------
#ifndef cMathH
#define cMathH
//---------------------------------------------------------------------------
#include <StdCtrls.hpp>
#include <ComCtrls.hpp>
#include <stdio.h>
//---------------------------------------------------------------------------
#include "cDatastream.h"
//---------------------------------------------------------------------------
//! Klasse cMath, mathematische Operationen
/*! Die Klasse cMath bietet verschiedene mathematische Operationen an, die auf
 *  dem zugrundeliegenden Datastream ausgeführt werden können:\n
 *  <ul><li>Ableitungen bilden</li>
 *  <li>TurningPoints finden (lokale Minia und Maxima)</li>
 *  <li>Frequenz-Bereiche finden/bilden</li></ul>
 */
class cMath : public cDatastream
	{
private:
	cDatastream*	Stream;

public:
	cMath();
	~cMath();

	bool			buildDerivates();
	//-----------------------------------------------------------------------
	//------------ Funktionalitäten -----------------------------------------
	//-----------------------------------------------------------------------

	//-----------------------------------------------------------------------
	//------------ getter und setter ----------------------------------------
	//-----------------------------------------------------------------------
	};
//---------------------------------------------------------------------------
#endif
