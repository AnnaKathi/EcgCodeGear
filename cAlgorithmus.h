//---------------------------------------------------------------------------
#ifndef cAlgorithmusH
#define cAlgorithmusH
//---------------------------------------------------------------------------
#include <StdCtrls.hpp>
#include <ComCtrls.hpp>
#include <stdio.h>
//---------------------------------------------------------------------------
#include "Basics.h"
//---------------------------------------------------------------------------
//! Klasse cAlgorithmus
/*! Die Klasse cAlgorithmus bietet Funktionalitäten an, die alle Algorithmen
 *  benötigen, wie zum Beispiel Anzeige der ProgressBar usw.
 */
class cAlgorithmus
	{
private:
	TProgressBar*	pbJob;

public:

	//! Übergibt eine ProgressBar über die der Fortschritt angezeigt werden kann
	/*! Die übergebene ProgressBar wird in der Klasse für die Arbeitsanzeige
	 *  hinterlegt. Wenn die Funktion nicht aufgerufen oder NULL
	 *  übergeben wird, wird kein Fortschritt angezeigt.
	 *  \param (TProgressBar) pb
	 */
	void ProgressBarSet(TProgressBar* pb);
	bool ProgressBegin(int max, int pos=0); //ProgressBar initialisieren
	bool ProgressTick(int tick=1); //Position += tick
	bool ProgressEnd(); //Position = Max

	};
//---------------------------------------------------------------------------
#endif
