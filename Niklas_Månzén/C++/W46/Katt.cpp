#include "Katt.hpp"

Katt::Katt(std::string namn_,std::string kon_) : Daggdjur(namn_,kon_)
{
    topphastighet = 49;
    vikt = 2;   // Ville ha annat värde för katt
    std::cout << "Mjaaaau!\n";
}

Katt::~Katt()
{
    std::cout << "Frsssscch! sa Katten & sprang!...\n";
}
