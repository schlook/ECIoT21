#include <iostream>
#include "Djur.hpp"
#include "Fisk.hpp"
#include "Fagel.hpp"

int main(void)
{
    Fisk fisk;
    fisk.simma();
    fisk.ät();
    fisk.sov();
    std::cout<<std::endl;
    Fågel fågel;
    fågel.flyg();
    fågel.ät();
    fågel.sov();
    return 0;
}