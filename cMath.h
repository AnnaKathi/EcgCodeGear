//---------------------------------------------------------------------------
#ifndef cMathH
#define cMathH
//---------------------------------------------------------------------------
#include <StdCtrls.hpp>
#include <stdio.h>
//---------------------------------------------------------------------------
#include "Basics.h"
#include "cDatastream.h"
//---------------------------------------------------------------------------
//! Klasse cMath, mathematische Operationen
/*! Die Klasse cMath bietet verschiedene mathematische Operationen an, die auf
 *  dem zugrundeliegenden Datastream ausgeführt werden können:\n
 *  <ul><li>Ableitungen bilden</li>
 *  <li>TurningPoints finden (lokale Minia und Maxima)</li>
 *  <li>Frequenz-Bereiche finden/bilden</li></ul>
 */
class cMath
	{
private:
	cDatastream*	Stream;

public:
	cMath();
	~cMath();

	bool			buildDerivates(TMemo* mInfo);
	};
//---------------------------------------------------------------------------
#endif
