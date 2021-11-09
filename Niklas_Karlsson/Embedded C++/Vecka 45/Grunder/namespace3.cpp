#include <iostream>

namespace EC
{
    int resultat = 23;
    void printResultat(void)
    {
        std::cout << resultat << std::endl;
    }
};

int printResultat(void)
{
    int resultat = 45;

    return resultat;
}

int main(void)
{
    std::cout << printResultat() << std::endl;
    // Nu använder vi EC
    EC::printResultat();
    return 0;
}