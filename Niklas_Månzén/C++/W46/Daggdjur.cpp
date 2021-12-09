#include "Daggdjur.hpp"

Daggdjur::Daggdjur(std::string namn_,std::string kon_)
{
    
    namn = namn_ ;
    kon = kon_ ;

}

Daggdjur::Daggdjur()
{
    
}

Daggdjur::~Daggdjur()
{

}

std::string Daggdjur::ta_namn() // Tar namn genom get-metod!
    {
        return namn;
    }

std::string Daggdjur::ta_kon() // Tar kön genom get-metod!
    {
        return kon;
    }