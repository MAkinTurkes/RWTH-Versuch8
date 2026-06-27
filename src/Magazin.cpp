/*
 * Magazin.cpp
 *
 *  Created on: Jun 27, 2026
 *      Author: pir2h
 */

#include "Magazin.h"
#include <string>
using namespace std;


Magazin::Magazin(string initTitel, Datum initDatumAusgabe, string initSparte) : Medium(initTitel), datumAusgabe(initDatumAusgabe), sparte(initSparte)
{
}


void Magazin::ausgabe(std::ostream& out) const
{
	Medium::ausgabe(out);
	out << "Ausgabe: " << datumAusgabe << endl << "Sparte: " << sparte << endl;
}

bool Magazin::ausleihen(Person person, Datum ausleihdatum)
{
	if((ausleihdatum - datumAusgabe) < 1)
	{
		cout << "Die neueste Ausgbae kann nicht verliehen werden!" << endl;
		return false;
	}
	else
	{
		return Medium::ausleihen(person, ausleihdatum);
	}
}
