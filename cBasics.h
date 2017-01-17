//---------------------------------------------------------------------------
#ifndef cBasicsH
#define cBasicsH
//---------------------------------------------------------------------------
#include <StdCtrls.hpp>
#include <ComCtrls.hpp>
#include <stdio.h>
//---------------------------------------------------------------------------
//! Klasse cBasics, bietet Grundfunktionalitäten für alle beteiligten Klassen an
/*! Die Klasse cBasics bietet Grundfunktionalitäten für alle beteiligten Klassen
 *  an. Pro Algorithmus wird die Klasse einmal instanziiert.\n
 *  Angeboten werden Funktionalitäten, die während der Verarbeitung von allen
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
	//! Setter-Funktion, überträgt das übergebene Memo-Feld in die Klasse
	/*! Das übergebene Memo wird in einer privaten Klassenvariable gespeichert
	 *  und kann während der Verarbeitung von allen beteiligten Klassen als
	 *  Ausgabemedium verwendet werden.
	 *  \param (TMemo) memo
	 */
	void	MemoSet(TMemo* memo);

	//! Schreibt einen String in das übergebene Memo-Feld
	/*! Im übergebenen Memo wird eine neue Zeile mit dem übergebenen Text angehängt.
	 *  Diese Funktion kann insbesondere verwendet werden, wenn nicht das gemeinsame
	 *  Memo verwendet werden soll.
	 *  \param (TMemo) memo
	 *  \param (char* msg) formatierte Ausgabe
	 */
	void	MemoPrint(TMemo* memo, char* msg, ...);

	//! Schreibt einen String in das Klassen-Memo
	/*! Im gemeinsamen Klassen-Memo wird eine neue Zeile mit dem übergebenen
	 *  Text angehängt.
	 *  \param (char* msg) formatierte Ausgabe
	 */
	void	MemoPrint(char* msg, ...);

	//-----------------------------------------------------------------------
	//------------ ProgressBar ----------------------------------------------
	//-----------------------------------------------------------------------
	//! Setter-Funktion, überträgt die übergebene ProgressBar in die Klasse
	/*! Die übergebene ProgressBar wird in einer privaten Klassenvariable
	 *  gespeichert und kann während der Verarbeitung von allen beteiligten
	 *  Klassen verwendet werden.
	 *  \param (TProgressBar) bar
	 */
	void	ProgressSet(TProgressBar* bar);

	//! Initiiert die gemeinsame ProgressBar
	/*! Die gemeinsame ProgressBar wird initiiert. Dabei wird der Maximal-Wert
	 *  gesetzt sowie die Anfangsposition, sofern angebeben. Wenn keine Position
	 *  übergeben wurde, wird die Position mit Null vorbesetzt.
	 *  \param (int) max, Maximalwert der ProgressBar
	 *  \param (int) pos, Anfangsposition der ProgressBar, vorbesetzt mit Null
	 */
	void	ProgressBegin(int max, int pos = 0);

	//! Erhöht die Position der ProgressBar
	/*! Die Position der gemeinsamen ProgressBar wird um den übergebenen Wert
	 *  erhöht, sofern dieser vorhanden ist. Wenn kein Wert übergeben wurde,
	 *  wird die Erhöhung mit 1 vorbesetzt.
	 *  \param (int) tick, Wert um den die Position erhöht werden soll, vorbesetzt mit 1
	 */
	void	ProgressTick(int tick = 1);

	//! Beendet den Lauf der ProgressBar
	/*! Die Position der gemeinsamen ProgressBar wird auf den Endwert gesetzt.
	 *  Wenn kein Endwert übergeben wurde (=0), wird die Position auf den
	 *  Maximalwert gesetzt.
	 *  \param (int) endwert, Abschlussposotion die eingenommen werden soll,
	 *		vorbesetzt mit 0 = auf Maximalposition setzen
	 */
	void	ProgressEnd(int endwert = 0);

	//-----------------------------------------------------------------------
	//------------ Image ----------------------------------------------------
	//-----------------------------------------------------------------------
	//! Setter-Funktion, überträgt das übergebene Image in die Klasse
	/*! Das übergebene Image wird in einer privaten Klassenvariable
	 *  gespeichert und kann während der Verarbeitung von allen beteiligten
	 *  Klassen verwendet werden.
	 *  \param (TImage) pic
	 */
	void	ImageSet(TImage* pic);

	//! Füllt das Bild mit der übergebenen Farbe (Initialisierung)
	/*! Das gemeinsame Image wird mit der übergeben Farbe vollständig gefüllt.
	 *  Diese Funktion kann z.B. zur Initialisierung oder zum Löschen des
	 *  Images verwendet werden.
	 *  \param (TColor) cl, Farbe mit der das Bild gefüllt werden soll
	 */
	void	ImagePaint(TColor cl);

	};
//---------------------------------------------------------------------------
//extern TMemo* 		mInfo;
//extern TProgressBar* 	pbJob;
//---------------------------------------------------------------------------
#endif
