/*
 * DVD.h
 *
 *  Created on: Jun 27, 2026
 *      Author: pir2h
 */

#ifndef DVD_H_
#define DVD_H_
#include "Medium.h"
#include <string>
using namespace std;


class DVD : public Medium
{
public:
	/*
	 * @brief Der Konstruktor fuer die Unterklasse DVD.
	 *
	 * @param initTitel Titel der DVD
	 * @param initDatumAusgabe Ausgabedatum der DVD
	 * @param initSparte Sparte der DVD
	 */
	DVD(string initTitel, int initAltersfreigabe, string initGenre);

	/*
	 * @brief Die Ausgabefunktion
	 *
	 * Diese Funktion gibt alle Informationen einer DVD auf der Konsole aus
	 */
	virtual void ausgabe() const;

	/*
     * @brief Ausleihen-Funktion
     *
     * @param Person Person die das Medium ausleihen moechte
     * @param Datum Datum an dem das Medium ausgeliehen wird
     *
     * @return true,  wenn die Ausleihbeschr�nkungen erfuellt sind und das Medium ausgeliehen werden kann. false, wenn die Ausleihbeschraenkungen nicht erfuellt sind und das Medium nicht ausgeliehen werden kann
     */
	virtual bool ausleihen(Person person, Datum ausleihdatum);

private:
	/*
	 * @brief Altersfreigabe der DVD
	 */
	int altersfreigabe;

	/*
	 * @brief Genre der DVD
	 */
	string genre;
};

#endif /* DVD_H_ */
