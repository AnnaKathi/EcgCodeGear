//---------------------------------------------------------------------------
#ifndef cAlgYH
#define cAlgYH
//---------------------------------------------------------------------------
#include <StdCtrls.hpp>
#include <stdio.h>
//---------------------------------------------------------------------------
#include "Basics.h"
#include "cNonFiducial.h"
//---------------------------------------------------------------------------
//! Klasse cAlgY (Beispiel)
/*! Die Klasse cAlgY, non-fiducial-Beispiel
 */
class cAlgY
	{
private:
	cNonFiducial*	NonFid;

public:
	cAlgY();
	~cAlgY();

	bool			Authenticate(TMemo* mInfo);
	};
//---------------------------------------------------------------------------
#endif
