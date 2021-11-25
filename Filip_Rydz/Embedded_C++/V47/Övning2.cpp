#include <iostream>

using namespace std; // för att slippa behöva skriva std:: varje gång

class Franchise // class med våra Franchises
{
public: // satt publict för att main ska komma åt dem
    void McDonalds() { cout << "I'm loving it" << endl; } // metod för att skriva ut slogan för McDonken... etc
    void KFC() { cout << "Finger Licking Good" << endl; }
    void BurgerKing() { cout << "Have it your way" << endl; }

};
int main()
{
    Franchise Slogan; // initierar nytt objekt 'Slogan' av classtypen 'Franchise'
    Slogan.McDonalds(); // kallar på metoden McDonalds
    Slogan.KFC();
    Slogan.BurgerKing();
    return 0;
}