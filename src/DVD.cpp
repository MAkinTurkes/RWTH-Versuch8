/*
 * DVD.cpp
 *
 *  Created on: Jun 27, 2026
 *      Author: pir2h
 */

#include "DVD.h"
#include <string>
using namespace std;

DVD::DVD(string initTitel, int initAltersfreigabe, string initGenre) : Medium(initTitel), altersfreigabe(initAltersfreigabe), genre(initGenre)
{
}

void DVD::ausgabe() const
{
	Medium::ausgabe();

	cout << "FSK: ab " << altersfreigabe << " Jahre" << endl << "Genre: " << genre << endl;
}

bool DVD::ausleihen(Person person, Datum ausleihdatum)
{
	if((ausleihdatum - person.getGeburtsdatum()) < altersfreigabe)
	{
		cout << "Sie sind nicht alt genug!" << endl;
		return false;
	}
	else
	{
		return Medium::ausleihen(person, ausleihdatum);
	}
}
