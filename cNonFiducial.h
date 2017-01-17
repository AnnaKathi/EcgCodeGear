//---------------------------------------------------------------------------
#ifndef cNonFiducialH
#define cNonFiducialH
//---------------------------------------------------------------------------
#include <StdCtrls.hpp>
#include <ComCtrls.hpp>
#include <stdio.h>
//---------------------------------------------------------------------------
#include "cMath.h"
//---------------------------------------------------------------------------
//! Klasse cNonFiducial, non-fiducial features finden und verarbeiten
/*! Die Klasse cNonFiducial übernimmt die non-fiducial-basierte Verarbeitung der
 *  EKG-Daten und bildet die Basis für die non-fiducial-basierten Algorithmen.
 */
class cNonFiducial : public cMath
	{
private:
	cMath*			Math;

public:
	cNonFiducial();
	~cNonFiducial();

	bool		findFeatures();
	//-----------------------------------------------------------------------
	//------------ Funktionalitäten -----------------------------------------
	//-----------------------------------------------------------------------

	//-----------------------------------------------------------------------
	//------------ getter und setter ----------------------------------------
	//-----------------------------------------------------------------------
	};
//---------------------------------------------------------------------------
#endif
