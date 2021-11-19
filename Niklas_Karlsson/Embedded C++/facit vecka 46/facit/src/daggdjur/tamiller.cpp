#include "tamiller.hpp"

// Tam-iller.. inte tamiler (folkgrupp)
Tamiller::~Tamiller(void)
{
    // Börjar med djuret NAMN
    std::cout << "Tam-illern " << this->namn << " ";
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

void Tamiller::prata(void)
{
    // 
    std::cout << "Kluck kluck" << std::endl;
}