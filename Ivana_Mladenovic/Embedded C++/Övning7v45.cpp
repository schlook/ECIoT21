#include <iostream>

//deklarerar struct
struct Avstånd
{
    //medlemar
    int m;
    float cm;
};
//deklarerar funktioner
//funktionen mätAvstånd är av datatyp struct och tar emot 2 struct som argument
Avstånd mätAvstånd(Avstånd av1, Avstånd av2);
//funktionen tar emot struct som arg, returnerar inte något
void skrivUtAvstånd(Avstånd av);
//main börjar
int main(void)
{
    //tre deklarationer av structen
    Avstånd av1,av2, av3;
    //första avståndet
    std::cout<<"Ange meter: "<<std::endl;
    std::cin>>av1.m;
    std::cout<<"Ange centimeter:"<<std::endl;
    std::cin>>av1.cm;
    //andra avståndet
    std::cout<<"Ange meter: "<<std::endl;
    std::cin>>av2.m;
    std::cout<<"Ange centimeter:"<<std::endl;
    std::cin>>av2.cm;
    //anropar funktionen och resultatet som den returnerar tillbaka sparas i structens 'av3'
    av3 = mätAvstånd(av1, av2);
    std::cout << "av1 = ";
    skrivUtAvstånd(av1);
    std::cout << "av2 = ";
    skrivUtAvstånd(av2);

    std::cout << "Längst avstånd = ";
    skrivUtAvstånd(av3);
    return 0;
}//main slutar

Avstånd mätAvstånd(Avstånd av1, Avstånd av2)
{
    //deklaration av structen
    Avstånd utskrift;
    if(av1.m > av2.m)
    {
        utskrift = av1;
    }
    if(av1.m < av2.m)
    {
        utskrift = av2;
    }
    if(av1.cm > av2.cm)
    {
        utskrift = av1;
    }
    if(av1.cm < av2.cm)
    {
        utskrift = av2;
    }
    return utskrift;
}
void skrivUtAvstånd(Avstånd av)
{
    //slår samman meter med centimeter med en '.' som är sparade i structen
    std::cout<<av.m<<","<<av.cm<<std::endl;
}