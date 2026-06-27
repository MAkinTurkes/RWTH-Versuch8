/*
 * Buch.h
 *
 *  Created on: Jun 27, 2026
 *      Author: pir2h
 */

#ifndef BUCH_H_
#define BUCH_H_
#include "Medium.h"
#include<string>
using namespace std;

class Buch : public Medium
{
public:
	/*
	 * @brief Der Konstruktor fuer die Unterklasse Buch.
	 *
	 * @param initTitel Titel des Buchs
	 * @param initAutor Autor des Buchs
	 */
	Buch(string initTitel, string initAutor);

	/*
	 * @brief Die Ausgabefunktion
	 *
	 * Diese Funktion gibt alle Informationen eines Buches auf der Konsole aus
	 */
	virtual void ausgabe(std::ostream& out) const;

private:
	/*
	 * @brief Autor des Buchs
	 */
	string autor;
};

#endif /* BUCH_H_ */
