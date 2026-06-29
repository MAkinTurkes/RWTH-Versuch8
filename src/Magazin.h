/*
 * Magazin.h
 *
 *  Created on: Jun 27, 2026
 *      Author: pir2h
 */

#ifndef MAGAZIN_H_
#define MAGAZIN_H_
#include <string>
#include "Medium.h"
using namespace std;

class Magazin : public Medium
{
public:
	/**
     * @brief Der Konstruktor fuer die Unterklasse Magazin.
	 *
	 * @param initTitel Titel des Magazins
	 * @param initDatumAusgabe Ausgabedatum des Magazins
	 * @param initSparte Sparte des Magazins
	 */
	Magazin(string initTitel, Datum initDatumAusgabe, string initSparte);

	/**
	 * @brief Die Ausgabefunktion
	 *
	 * Diese Funktion gibt alle Informationen eines Magazins auf der Konsole aus
	 */
	virtual void ausgabe(std::ostream& out) const;

	/**
     * @brief Ausleihen-Funktion
     *
     * @param person Person die das Medium ausleihen moechte
     * @param ausleihdatum Datum an dem das Medium ausgeliehen wird
     *
     * @return true,  wenn die Ausleihbeschr�nkungen erfuellt sind und das Medium ausgeliehen werden kann. false, wenn die Ausleihbeschraenkungen nicht erfuellt sind und das Medium nicht ausgeliehen werden kann
     */
	virtual bool ausleihen(Person person, Datum ausleihdatum);

private:
	/**
	 * @brief Ausgabedatum des Magazins
	 */
	Datum datumAusgabe;

	/**
	 * @brief Sparte des Magazins
	 */
	string sparte;

};

#endif /* MAGAZIN_H_ */
