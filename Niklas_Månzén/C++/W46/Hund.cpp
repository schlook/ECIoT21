#include "Hund.hpp"

Hund::Hund(std::string namn_,std::string kon_) : Daggdjur(namn_, kon_)
{
    topphastighet = 33;
    vikt = 5;   //Annat värde för hund
    std::cout << "Woff!\n";
}

Hund::~Hund()
{
    std::cout << "Grrrr! sa hunden & sprang...\n";
}