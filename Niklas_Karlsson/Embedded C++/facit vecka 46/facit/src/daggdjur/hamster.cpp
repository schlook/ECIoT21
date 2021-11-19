#include "hamster.hpp"

// Anger definitionen av vår metod
Hamster::~Hamster(void)
{
    // Börjar med djuret NAMN
    std::cout << "Hamstern " << this->namn << " ";
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
void Hamster::prata(void)
{
    //
    std::cout << "Piip piip" << std::endl;
}
