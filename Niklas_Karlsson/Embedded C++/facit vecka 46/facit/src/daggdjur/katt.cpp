#include "katt.hpp"

// Anger definitionen av vår metod
void Katt::prata()
{
    std::cout << "Mjau, mjau, mjau!" << std::endl;
}

// Anger definitionen av vår metod
Katt::~Katt(void)
{
    // Börjar med djuret NAMN
    std::cout << "Katten " << this->namn << " ";
    // Kollar om ålder är större än  0 (om det är satt)
    if (this->ålder > 0)
    {
        // Lägger till texten "blev bara XX år"
        std::cout << "blev bara " << this->ålder << " år" << std::endl;
    }
    else
    {
        // Eller lägger till "har gått bort"
        std::cout << "har gått bort" << std::endl;
    }
}

// definitionen av vår metod, skriver över den ärvda metoden från däggdjur.
void Katt::mata(std::string typavmat, int gram)
{
    // typavmat kommer från paramterar i denna metod/funktion
    if (typavmat == "råtta")
    {
        std::cout << "Råttor är kattens favrit.. bra val!" << std::endl;
    }

    // this->sover kommer från däggdjur-klassen
    if (!this->sover)
    {
        if (gram > 120)
        {
            // this->sättvikt kommer från däggdjur-klassen
            this->sättVikt(0.12);
            // this->sover kommer från däggdjur-klassen
            this->sover = 1;
            std::cout << "Katten orkade inte mer mat och somnade... " << std::endl;
        }
        else
        {
            // this->sättvikt kommer från däggdjur-klassen
            this->sättVikt(gram / 100.0);
        }
    }
    else
    {
        std::cout << "Katten sover. Vänligen väck katten först!" << std::endl;
    }
}