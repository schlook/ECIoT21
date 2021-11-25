#include "duva.hpp"

// Anger definitionen av vår metod
Duva::~Duva(void)
{
    // Börjar med djuret NAMN
    std::cout << "Duvan " << this->namn << " ";
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
void Duva::prata(void)
{
    //
    std::cout << "Prrr Prrr" << std::endl;
}
