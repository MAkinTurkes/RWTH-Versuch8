/*
 * Buch.cpp
 *
 *  Created on: Jun 27, 2026
 *      Author: pir2h
 */

#include "Buch.h"
#include<string>
using namespace std;

Buch::Buch(string initTitel = "", string initAutor = "") : titel(initTitel), autor(initAutor)
{
}

virtual void Buch::ausgabe() const
{
	Medium::ausgabe();
	cout << "Autor: " << autor << endl;
}
