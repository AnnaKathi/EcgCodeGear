//---------------------------------------------------------------------------
#ifndef cNonFiducialH
#define cNonFiducialH
//---------------------------------------------------------------------------
#include <StdCtrls.hpp>
#include <ComCtrls.hpp>
#include <stdio.h>
//---------------------------------------------------------------------------
#include "Basics.h"
#include "cMath.h"
//---------------------------------------------------------------------------
//! Klasse cNonFiducial, non-fiducial features finden und verarbeiten
/*! Die Klasse cNonFiducial �bernimmt die non-fiducial-basierte Verarbeitung der
 *  EKG-Daten und bildet die Basis f�r die non-fiducial-basierten Algorithmen.
 */
class cNonFiducial
	{
private:
	cMath*			Math;

public:
	cNonFiducial();
	~cNonFiducial();

	bool		findFeatures(TMemo* mInfo);
	//-----------------------------------------------------------------------
	//------------ Funktionalit�ten -----------------------------------------
	//-----------------------------------------------------------------------

	//-----------------------------------------------------------------------
	//------------ getter und setter ----------------------------------------
	//-----------------------------------------------------------------------
	};
//---------------------------------------------------------------------------
#endif
