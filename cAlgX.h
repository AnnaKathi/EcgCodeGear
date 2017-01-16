//---------------------------------------------------------------------------
#ifndef cAlgXH
#define cAlgXH
//---------------------------------------------------------------------------
#include <StdCtrls.hpp>
#include <stdio.h>
//---------------------------------------------------------------------------
#include "Basics.h"
#include "cFiducial.h"
//---------------------------------------------------------------------------
//! Klasse cAlgX (Beispiel)
/*! Die Klasse cAlgX, fiducial-Beispiel
 */
class cAlgX
	{
private:
	cFiducial*		Fiducial;

public:
	cAlgX();
	~cAlgX();

	bool 			Authenticate(TMemo* mInfo);
	};
//---------------------------------------------------------------------------
#endif
