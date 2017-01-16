//---------------------------------------------------------------------------
#ifndef cFiducialH
#define cFiducialH
//---------------------------------------------------------------------------
#include <StdCtrls.hpp>
#include <stdio.h>
//---------------------------------------------------------------------------
#include "Basics.h"
#include "cMath.h"
//---------------------------------------------------------------------------
//! Klasse cFiducial, fiducial features finden und verarbeiten
/*! Die Klasse cFiducial �bernimmt die fiducial-basierte Verarbeitung der
 *  EKG-Daten und bildet die Basis f�r die fiducial-basierten Algorithmen.
 *  Die Klasse findet die Amplitude-, Time- und Morphology-features in einem
 *  Herzschlag, welche von den Algorithmen f�r die Authentifizierung verwendet
 *  werden k�nnen.
 */
class cFiducial
	{
private:
	cMath*		Math;

public:
	cFiducial();
	~cFiducial();

	bool 		findFeatures(TMemo* mInfo);
	};
//---------------------------------------------------------------------------
#endif
