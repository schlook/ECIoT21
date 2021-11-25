#include <iostream>
#include <iomanip>
// deklarera struct 'Avstånd' innehållande två variabler, int meter och float cm. 
struct Avstånd 
{
    int meter;
    float cm;
};

/* dek två funktioner, båda tar emot en resp två argument av typen Struct. 
**Deklareras efter deklarationen av struct för att göra 'struct avstånd' tillgängliga för  funktionerna*** */
Avstånd mätAvstånd(Avstånd av1, Avstånd av2); // har två argument av typen struct, returnerar en struct.
void skrivAvstånd(Avstånd av3); // tar emot ett agrument.

int main()
{
    Avstånd av1, av2, av3; // deklarerar 3 st structer av typen Avstånd
    std::cout << "Ange avstånd i meter: ";
    std::cin >> av1.meter;
    std::cout << "Ange avstånd i cm: ";
    std::cin >> av1.cm;
    
    std::cout << "Ange nästa avstånd i meter: ";
    std::cin >> av2.meter;
    std::cout << "Ange nästa avstånd i cm: ";
    std::cin >> av2.cm;

    std::cout << "Du angav:"<< std::endl;
    std::cout << "Avstånd 1 : " << av1.meter << "." << av1.cm << std::endl;
    std::cout << "Avstånd 2 : " << av2.meter << "." << av2.cm << std::endl;

    av3 = mätAvstånd(av1, av2); // mätAvstånd anropas med av1 och av2 som argument, av3 tilldelas returvärdet
    skrivAvstånd(av3); // anropar func med av3 som argument

    return 0;
}
/* funktionen kollar vilket av avstånden som är längst. initierar den interna structen 'avstånd.utskrift' 
med det längsta avståndet och returnerar sedan den */
Avstånd mätAvstånd(Avstånd av1, Avstånd av2) 
{
    Avstånd utskrift;
    if (av1.meter > av2.meter)
    {
        utskrift = av1;
    }    
    if (av1.meter < av2.meter)
    {
        utskrift = av2;
    }    
    if (av1.cm > av2.cm)
    {
        utskrift = av1;
    }    
    if (av1.cm < av2.cm)
    {
        utskrift = av2;
    }    
    return utskrift;
}
void skrivAvstånd(Avstånd av3) // tar emot det längsta avståndet som argument och skriver ut det
{
    std::cout << "Längsta avståndet är: " << av3.meter << "." << av3.cm << std::endl;
}