/*!
 * Praktikum Informatik 1 
 * 
 *
 * @file Medium.h
 */

#ifndef MEDIUM_H_
#define MEDIUM_H_

#include "Datum.h"
#include "Person.h"
#include <ostream>
#include <iostream>

/*! \brief Basisklasse f�r s�mtliche Medien
*
* Diese Klasse stellt eine Basisklasse f�r Objekte dar, die Medien beschreiben
* Von dieser Klasse werden alle anderen Medien, wie z.B. Buch oder DVD abgeleitet
*/
class Medium
{
public:
    /*!
     * @brief Konstruktor
     *
     * Konstruktor der Klasse Medium
     *
     * \param initTitel: Titel des Mediums
     */
    Medium(std::string initTitel);

    /*!
     * @brief virtueller Destruktor
     */
    virtual ~Medium(void);

    /*!
     * @brief Ausgabefunktion
     *
     * Funktion gibt alle Informationen eines Mediums auf der Konsole aus
     */
    virtual void ausgabe(std::ostream& out) const = 0;

    /*!
     * @brief Ausleihen-Funktion
     *
     * \param person Person die das Medium ausleihen m�chte
     * \param ausleihdatum Datum an dem das Medium ausgeliehen wird
     *
     * \return bool: true,  wenn die Ausleihbeschr�nkungen erf�llt sind und das Medium ausgeliehen werden kann
     *               false, wenn die Ausleihbeschr�nkungen nicht erf�llt sind und das Medium nicht ausgeliehen werden kann
     */
    virtual bool ausleihen(Person person, Datum ausleihdatum);

    /*!
     * @brief Gibt ein Medium in die B�cherei zur�ck
     */
    void zurueckgeben();

    /*!
     * @brief ID des Mediums
     *
     * \return int: gibt die ID des Mediums zur�ck
     */
    unsigned int getID();

    /**
     * @brief Gibt den Status des Mediums zurueck.
     */
    bool getStatus() const;

protected:
    /*!
     * @brief Statische Variable zum Erzeugen der fortlaufenden IDs
     */
    static unsigned int currentID;
     
    /*!
     * @brief Eindeutige ID des Mediums
     */
    unsigned int ID;

    /*!
     * @brief Titel des Mediums
     */
    std::string titel;

    /*!
     * @brief Status des Mediums (true: ausgeliehen, false: nicht ausgeliehen)
     */
    bool status;

    /*!
     * @brief Datum seit dem das Medium ausgeliehen ist
     */
    Datum datumAusgeliehen;

    /*!
     * @brief Person, die das Medium ausgeliehen hat
     */
    Person personAusgeliehen;

};

/**
 * @brief Ueberladung vom <<-Operator fuer ostream.
 *
 * Ueberladung vom <<-Operator fuer ostream, sodass Medium-Objekte und bzw Medium-Unterklassen direkt bei der Ausgabe benutzt werden (z.B. std::cout << neueMedium).
 * @param out Die Referenz zum std::cout.
 * @param medium Das Medium-Objekt, das an den Konsol geprintet werden wird.
 * @return Eine Referenz zum std::cout. Damit kann man mehr als eine Ausgabe verketten.
 */
std::ostream& operator << (std::ostream& out, const Medium& medium);

#endif
