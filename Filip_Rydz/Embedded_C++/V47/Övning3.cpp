#include <iostream>

using namespace std; // för att inte behöva skriva std:: (..)

class Person // våran Person-klass
{
public: // satt publict för att kunna nås av de andra klasserna och för att kunna kallas på från main
    string namn;
    void sättNamn(string n) { namn = n; } // tar emot argumentet string n, tilldelar 'string namn' = n.

};
class far:public Person // skapar klass 'far' som ärver från Person-klasser
{
public: // public för att kunna kallas utifrån klassen
    void skrivUtNamn() { cout << "Jag är Pappa och mitt namn är " << namn << endl; } // ärver 'namn'(string) från person-klassen
};
class son:public Person
{
public:
    void skrivUtNamn() { cout << "Jag är son och mitt namn är " << namn << endl; }
};

int main()
{
    far Far; // skapar objektet Far
    // kallar på metoden 'sättNamn' med argumentet 'Filip' (string), objektet 'Far' tilldelas atributet 'namn' dvs Filip
    Far.sättNamn("Filip"); 
    Far.skrivUtNamn(); // kallar metoden, fortfarande samma objekt

    son Son;
    Son.sättNamn("Eli");
    Son.skrivUtNamn();

    return 0;
}