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


void Magazin::ausgabe() const
{
	Medium::ausgabe();
	cout << "Ausgabe: " << datumAusgabe << endl << "Sparte: " << sparte << endl;
}
