#include <iostream>
// std::numeric_limits
#include <limits>

// Varje program måste ha en main()-funktion
int main(void)
{
    int heltal;
    std::cout << "Ange ett tal:" << std::endl;
    // .fail är en del av std::ios::fail
    while (!(std::cin >> heltal))
    {
        // kontrollerar om vi misslyckades.
        if (std::cin.fail())
        {
            // Rensar error-flaggan (badbit eller failbit)
            std::cin.clear();

            // Detta kastar bort resterande linje (fram till ny rad)
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout
                << "Du har angett fel värde." << std::endl
                << "Var god försök igen" << std::endl;
        }
    }

    // vi säger fortfarande till operativsystemet
    // att allt gick bra när programmet avslutades.
    return 0;
}