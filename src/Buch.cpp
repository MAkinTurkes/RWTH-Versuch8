/*
 * Buch.cpp
 *
 *  Created on: Jun 27, 2026
 *      Author: pir2h
 */

#include "Buch.h"
#include<string>
using namespace std;

Buch::Buch(string initTitel = "", string initAutor = "") : Medium(initTitel), autor(initAutor)
{
}

void Buch::ausgabe(std::ostream& out) const
{
	Medium::ausgabe(out);
	out << "Autor: " << autor << endl;
}
