#ifndef DAGGDJUR
#define DAGGDJUR
#include <iostream>

class Daggdjur
{
protected:

    int alder = 0;      // Sätter defaultvärde på ålder
    float vikt = 5.0;   // Sätter defaultvärde på vikt
    std::string namn;
    std::string kon;
    float topphastighet;
    
public:

    Daggdjur(std::string namn_,std::string kon_);

    Daggdjur();

    ~Daggdjur();

    std::string ta_namn();

    std::string ta_kon();
};

#endif