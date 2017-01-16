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
/*! Die Klasse cAlgorithmus bietet Funktionalit�ten an, die alle Algorithmen
 *  ben�tigen, wie zum Beispiel Anzeige der ProgressBar usw.
 */
class cAlgorithmus
	{
private:
	TProgressBar*	pbJob;

public:

	//! �bergibt eine ProgressBar �ber die der Fortschritt angezeigt werden kann
	/*! Die �bergebene ProgressBar wird in der Klasse f�r die Arbeitsanzeige
	 *  hinterlegt. Wenn die Funktion nicht aufgerufen oder NULL
	 *  �bergeben wird, wird kein Fortschritt angezeigt.
	 *  \param (TProgressBar) pb
	 */
	void ProgressBarSet(TProgressBar* pb);
	bool ProgressBegin(int max, int pos=0); //ProgressBar initialisieren
	bool ProgressTick(int tick=1); //Position += tick
	bool ProgressEnd(); //Position = Max

	};
//---------------------------------------------------------------------------
#endif
