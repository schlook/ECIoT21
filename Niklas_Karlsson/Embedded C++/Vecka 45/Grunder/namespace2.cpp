#include <iostream>

namespace EC
{
    int resultat = 23;
};

int resultat2 = 45;

int main(void)
{
    // Detta kommer krocka däremot, varför using kan ställa till det.
    using namespace EC;
    std::cout << resultat2 << std::endl;
    // Nu använder vi EC
    std::cout << EC::resultat << std::endl;
    return 0;
}