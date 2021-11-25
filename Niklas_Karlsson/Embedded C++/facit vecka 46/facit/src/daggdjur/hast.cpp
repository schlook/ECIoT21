#include "hast.hpp"

// Anger definitionen av vår metod
Häst::~Häst(void)
{
    // Börjar med djuret NAMN
    std::cout << "Hästen " << this->namn << " ";
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
void Häst::prata(void)
{
    //
    std::cout << "Gnääägg gnääägg" << std::endl;
}
