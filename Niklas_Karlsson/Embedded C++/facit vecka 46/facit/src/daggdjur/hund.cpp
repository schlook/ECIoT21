#include "hund.hpp"

// Anger definitionen av vår metod
Hund::~Hund(void)
{
    // Börjar med djuret NAMN
    std::cout << "Hunden " << this->namn << " ";
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

// Anger definitionen av vår metod
void Hund::prata(void)
{
    // eller så tilldelar du en variabel i huvudklassen och struntar i att ha något här.
    // Det vill säga lägg till "läte" och ange lätet i konstruktorn från main();
    std::cout << "Voff voff" << std::endl;
}