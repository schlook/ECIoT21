#include <iostream>
#include "Hund.hpp"
#include "Katt.hpp"

/* 
Jag försökte lägga till saker som att tex de skulle få mat osv. Men jag 
förstod verkligen inte hur jag skulle gå till väga. 

Ville också kunna skriva ut defaultvärdena jag angett i subclasserna...

Det var mycket jag ville men inte kunde göra. 
Uppgiften gick åt helvete med andra ord. 
Det var en väldigt svår uppgift för mig */

int main()
{

    Katt harrison = Katt("Harrison","Hane");

    Katt oliver = Katt("Oliver","Hane");

    Hund flipper = Hund("Flipper","Hona");

    std::cout << harrison.ta_namn() << " \x84r en " << harrison.ta_kon() << std::endl;

    std::cout << oliver.ta_namn() << " \x84r en " << oliver.ta_kon() << std::endl;

    std::cout << flipper.ta_namn() << " \x84r en " << flipper.ta_kon() << std::endl;

    return 0;
}