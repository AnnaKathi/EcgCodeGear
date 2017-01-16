//---------------------------------------------------------------------------
#ifndef cCsvH
#define cCsvH
//---------------------------------------------------------------------------
#include <StdCtrls.hpp>
#include <stdio.h>
//---------------------------------------------------------------------------
#include "Basics.h"
//---------------------------------------------------------------------------
//! Klasse cCsv, CSV-Datei mit EKG-Daten einlesen
/*! Die Klasse cCsv liest eine Csv-Datei zeilenweise ein.
 */
class cCsv
	{
private:

public:
	cCsv();
	~cCsv();

	bool		openFile(TMemo* mInfo);
	};
//---------------------------------------------------------------------------
#endif
