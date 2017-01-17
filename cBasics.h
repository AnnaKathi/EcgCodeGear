//---------------------------------------------------------------------------
#ifndef cBasicsH
#define cBasicsH
//---------------------------------------------------------------------------
#include <StdCtrls.hpp>
#include <ComCtrls.hpp>
#include <stdio.h>
//---------------------------------------------------------------------------
//! Klasse cBasics, bietet Grundfunktionalit�ten f�r alle beteiligten Klassen an
/*! Die Klasse cBasics bietet Grundfunktionalit�ten f�r alle beteiligten Klassen
 *  an. Pro Algorithmus wird die Klasse einmal instanziiert.\n
 *  Angeboten werden Funktionalit�ten, die w�hrend der Verarbeitung von allen
 *  Klassen genutzt werden sollen, z.B. die gemeinschaftliche ProgressBar und
 *  das Ausgabe-Memo. 
 */
class cBasics
	{
private:
	TMemo* 		 	mInfo;
	TProgressBar* 	pbJob;
	TImage*			img;

public:
	cBasics();
	~cBasics();

	//-----------------------------------------------------------------------
	//------------ Memo -----------------------------------------------------
	//-----------------------------------------------------------------------
	//! Setter-Funktion, �bertr�gt das �bergebene Memo-Feld in die Klasse
	/*! Das �bergebene Memo wird in einer privaten Klassenvariable gespeichert
	 *  und kann w�hrend der Verarbeitung von allen beteiligten Klassen als
	 *  Ausgabemedium verwendet werden.
	 *  \param (TMemo) memo
	 */
	void	MemoSet(TMemo* memo);

	//! Schreibt einen String in das �bergebene Memo-Feld
	/*! Im �bergebenen Memo wird eine neue Zeile mit dem �bergebenen Text angeh�ngt.
	 *  Diese Funktion kann insbesondere verwendet werden, wenn nicht das gemeinsame
	 *  Memo verwendet werden soll.
	 *  \param (TMemo) memo
	 *  \param (char* msg) formatierte Ausgabe
	 */
	void	MemoPrint(TMemo* memo, char* msg, ...);

	//! Schreibt einen String in das Klassen-Memo
	/*! Im gemeinsamen Klassen-Memo wird eine neue Zeile mit dem �bergebenen
	 *  Text angeh�ngt.
	 *  \param (char* msg) formatierte Ausgabe
	 */
	void	MemoPrint(char* msg, ...);

	//-----------------------------------------------------------------------
	//------------ ProgressBar ----------------------------------------------
	//-----------------------------------------------------------------------
	//! Setter-Funktion, �bertr�gt die �bergebene ProgressBar in die Klasse
	/*! Die �bergebene ProgressBar wird in einer privaten Klassenvariable
	 *  gespeichert und kann w�hrend der Verarbeitung von allen beteiligten
	 *  Klassen verwendet werden.
	 *  \param (TProgressBar) bar
	 */
	void	ProgressSet(TProgressBar* bar);

	//! Initiiert die gemeinsame ProgressBar
	/*! Die gemeinsame ProgressBar wird initiiert. Dabei wird der Maximal-Wert
	 *  gesetzt sowie die Anfangsposition, sofern angebeben. Wenn keine Position
	 *  �bergeben wurde, wird die Position mit Null vorbesetzt.
	 *  \param (int) max, Maximalwert der ProgressBar
	 *  \param (int) pos, Anfangsposition der ProgressBar, vorbesetzt mit Null
	 */
	void	ProgressBegin(int max, int pos = 0);

	//! Erh�ht die Position der ProgressBar
	/*! Die Position der gemeinsamen ProgressBar wird um den �bergebenen Wert
	 *  erh�ht, sofern dieser vorhanden ist. Wenn kein Wert �bergeben wurde,
	 *  wird die Erh�hung mit 1 vorbesetzt.
	 *  \param (int) tick, Wert um den die Position erh�ht werden soll, vorbesetzt mit 1
	 */
	void	ProgressTick(int tick = 1);

	//! Beendet den Lauf der ProgressBar
	/*! Die Position der gemeinsamen ProgressBar wird auf den Endwert gesetzt.
	 *  Wenn kein Endwert �bergeben wurde (=0), wird die Position auf den
	 *  Maximalwert gesetzt.
	 *  \param (int) endwert, Abschlussposotion die eingenommen werden soll,
	 *		vorbesetzt mit 0 = auf Maximalposition setzen
	 */
	void	ProgressEnd(int endwert = 0);

	//-----------------------------------------------------------------------
	//------------ Image ----------------------------------------------------
	//-----------------------------------------------------------------------
	//! Setter-Funktion, �bertr�gt das �bergebene Image in die Klasse
	/*! Das �bergebene Image wird in einer privaten Klassenvariable
	 *  gespeichert und kann w�hrend der Verarbeitung von allen beteiligten
	 *  Klassen verwendet werden.
	 *  \param (TImage) pic
	 */
	void	ImageSet(TImage* pic);

	//! F�llt das Bild mit der �bergebenen Farbe (Initialisierung)
	/*! Das gemeinsame Image wird mit der �bergeben Farbe vollst�ndig gef�llt.
	 *  Diese Funktion kann z.B. zur Initialisierung oder zum L�schen des
	 *  Images verwendet werden.
	 *  \param (TColor) cl, Farbe mit der das Bild gef�llt werden soll
	 */
	void	ImagePaint(TColor cl);

	};
//---------------------------------------------------------------------------
//extern TMemo* 		mInfo;
//extern TProgressBar* 	pbJob;
//---------------------------------------------------------------------------
#endif
