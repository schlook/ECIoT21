#include <iostream>
#include <cstdlib>
#include <math.h>

struct avstånd_m_cm
{
    float cm;
    int meter;
};

avstånd_m_cm mätAvstånd(avstånd_m_cm avstånd1,avstånd_m_cm avstånd2);

void skrivAvstånd(avstånd_m_cm avstånd);

int main()
{
    avstånd_m_cm avstånd1, avstånd2, avstånd3;

    std::cout << "Avst\x86nd 1" << std::endl;           // Ber användaren skriva in första avståndet
    std::cout << "Skriv in i meter! : " << std::endl;
    std::cin >> avstånd1.meter;
    std::cout << "Skriv in i centimeter! : " << std::endl;
    std::cin >> avstånd1.cm;

    std::cout << "Avst\x86nd 2" << std::endl;           // Ber användaren skriva in andra avståndet
    std::cout << "Skriv in i meter! : " << std::endl;
    std::cin >> avstånd2.meter;
    std::cout << "Skriv in i centimeter! : " << std::endl;
    std::cin >> avstånd2.cm;

    if (avstånd1.meter == avstånd2.meter && avstånd1.cm == avstånd2.cm)     //Fångar om de är likadana värden... :)
    {
        std::cout << "Du har angett likadana v\x84rden & de \x84r lika l\x86nga... Farv\x84l!" << std::endl;
        return 0;
    }

    avstånd3 = mätAvstånd(avstånd1, avstånd2);          // Avstånd3 tilldelas funktionen mätAvstånd av vår struct. som Jämför användarens olika input

    std::cout << "Avst\x86nd 1 = ";
    skrivAvstånd(avstånd1);

    std::cout << "Avst\x86nd 2 = ";
    skrivAvstånd(avstånd2);                 // Skriver ut allt!

    std::cout << "L\x84ngst avst\x86nd = ";
    skrivAvstånd(avstånd3);

    std::cout << "HA DET!" << std::endl;

    return 0;
}

avstånd_m_cm mätAvstånd(avstånd_m_cm avstånd1, avstånd_m_cm avstånd2) // Jämför användarens olika input
{
    avstånd_m_cm print;

    if (avstånd1.meter > avstånd2.meter) // Jämför först METER i Avstånd 1 & 2
    {
        print = avstånd1;
    }
    if (avstånd1.meter < avstånd2.meter)
    {
        print = avstånd2;                   
    }

    if (avstånd1.cm > avstånd2.cm)  // Annars går vi in på CM och jämför Avstånd 1 & 2
    {
        print = avstånd1;
    }
    if (avstånd1.cm < avstånd2.cm)
    {
        print = avstånd2;
    }

    return print; 
}

void skrivAvstånd(avstånd_m_cm avstånd)     // Skriver bara ut!
{
    std::cout << avstånd.meter << "." << avstånd.cm << "m" << std::endl;
}