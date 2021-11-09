#include <iostream>

namespace EC
{
    int resultat = 23;
};

int resultat = 45;

int main(void)
{
    // Nu använder vi inte namnrymden
    std::cout << resultat << std::endl;
    // Nu använder vi EC namnrymden
    std::cout << EC::resultat << std::endl;
    return 0;
}