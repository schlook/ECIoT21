#ifndef HUND
#define HUND
#include <iostream>
#include "Daggdjur.hpp"

class Hund : public Daggdjur
{
    public:
        Hund(std::string namn_,std::string kon_);
        ~Hund();
};

#endif