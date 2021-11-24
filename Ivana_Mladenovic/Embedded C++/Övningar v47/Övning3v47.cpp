#include <iostream>

class Person
{
    //allt i public kommer ärvas av underliggande klasserna
    public:
        std::string namn;
        //metod
        void sättNamn (std::string n){namn=n;}
};
//class Moder ärver från class Person
class Moder : public Person
{
    public:
    //klassens egna metod
    void print(void)
    {
        std::cout<<"Jag är mamma och heter "<<namn<<"."<<std::endl;
    }
};
//class Dotter ärver från class Person
class Dotter : public Person
{
    public:
    void print(void)
    {
        std::cout<<"Jag är dotter och heter "<<namn<<"."<<std::endl;
    }
};
int main(void)
{
    Moder mor;
    mor.sättNamn("Ivana");
    mor.print();
    //deklarerar 2 instanser/objekt av klassen Dotter 
    Dotter dot1, dot2;
    dot1.sättNamn("Izabella");
    dot1.print();
    dot2.sättNamn("Selena");
    dot2.print();
    return 0;
}