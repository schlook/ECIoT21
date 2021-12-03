#include <iostream>
#include <cmath> // inkluderar cmath för att använda pow() funktionen

#define PI 3.14 // definierar PI till 3.14

using namespace std; // för att inte behöva skriva std::

class Form // basklassen, med två variabler
{
protected:
    int x;
    int y;
public:
    void sättVärde(int a, int b = 0) {x = a; y = b;} // b=0 när vi endast tar emot ett argument iom subclassen Cirkel
    void visaArea() {cout << "Inga värden att beräkna" << endl;} // om visaArea anropas från basklassen skrivs detta ut oavsett om argument finns vid anropet.
};
class Triangel : public Form // subclass som ärver från basclassen Form
{
public:
    void visaArea() // metoden skriver över samma metod från basklassen
    {
        double area;
        area = (x * y) / 2; 
        cout << "En triangel med höjden " << x << " och basen " << y << " har en area på " << area << endl;
    }
};
class Fyrkant : public Form
{
public:
    void visaArea()
    {
        double area;
        area = x * y;
        cout << "En fyrkant med dimensionen " << x << " x " << y << " har en area på " << area << endl;
    }     
};
class Cirkel : public Form
{
public:
    void visaArea()
    {
        double area;
        area = pow(x, 2) * PI;
        cout << "En cirkel med en radius på " << x << " har en area på " << area << endl;
    }
};
int main()
{
    Triangel triangel; // skapar objekt triangel
    triangel.sättVärde(10, 4); // anropar metoden med 10 och 4 som argument
    triangel.visaArea();
    Fyrkant fyrkant; // skapar objektet fyrkant
    fyrkant.sättVärde(10, 5);
    fyrkant.visaArea();
    Cirkel cirkel;
    cirkel.sättVärde(9); // då b = 0 när metoden deklarerades går det att ta med endast ett argument. annars ges error
    cirkel.visaArea();

    return 0;
}
