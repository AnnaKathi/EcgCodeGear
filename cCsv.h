//---------------------------------------------------------------------------
#ifndef cCsvH
#define cCsvH
//---------------------------------------------------------------------------
#include <StdCtrls.hpp>
#include <ComCtrls.hpp>
#include <stdio.h>
//---------------------------------------------------------------------------
#include "cBasics.h"
//---------------------------------------------------------------------------
//! Klasse cCsv, CSV-Datei mit EKG-Daten einlesen
/*! Die Klasse cCsv liest eine Csv-Datei zeilenweise ein.
 */
class cCsv : public cBasics
	{
private:

public:
	cCsv();
	~cCsv();

	bool			openFile();
	//-----------------------------------------------------------------------
	//------------ Funktionalitšten -----------------------------------------
	//-----------------------------------------------------------------------

	//-----------------------------------------------------------------------
	//------------ getter und setter ----------------------------------------
	//-----------------------------------------------------------------------
	};
//---------------------------------------------------------------------------
#endif
