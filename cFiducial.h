//---------------------------------------------------------------------------
#ifndef cFiducialH
#define cFiducialH
//---------------------------------------------------------------------------
#include <StdCtrls.hpp>
#include <ComCtrls.hpp>
#include <stdio.h>
//---------------------------------------------------------------------------
#include "cMath.h"
//---------------------------------------------------------------------------
//! Klasse cFiducial, fiducial features finden und verarbeiten
/*! Die Klasse cFiducial übernimmt die fiducial-basierte Verarbeitung der
 *  EKG-Daten und bildet die Basis für die fiducial-basierten Algorithmen.
 *  Die Klasse findet die Amplitude-, Time- und Morphology-features in einem
 *  Herzschlag, welche von den Algorithmen für die Authentifizierung verwendet
 *  werden können.
 */
class cFiducial : public cMath
	{
private:
	cMath*			Math;

public:
	cFiducial();
	~cFiducial();

	bool 		findFeatures();
	//-----------------------------------------------------------------------
	//------------ Funktionalitäten -----------------------------------------
	//-----------------------------------------------------------------------

	//-----------------------------------------------------------------------
	//------------ getter und setter ----------------------------------------
	//-----------------------------------------------------------------------
	};
//---------------------------------------------------------------------------
#endif
