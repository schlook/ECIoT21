#ifndef KATT
#define KATT
#include <iostream>
#include "Daggdjur.hpp"

class Katt : public Daggdjur
{
    public:
        Katt(std::string namn_,std::string kon_);
        ~Katt();
};

#endif
