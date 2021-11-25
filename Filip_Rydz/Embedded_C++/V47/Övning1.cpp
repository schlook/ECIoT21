#include <iostream>

using namespace std; // using namnespace för att slippa behöva skriva std:: varje gång..

class Billboard // skapar vår class Billboard
{
public: // gör den public
    string titel; // deklarera vår titel sträng, titel representerar titlarna i billboarden

    void sättTitel(string låt) // vår metod som har sträng 'låt' som argument, fördelas i main
    {
        titel = låt; // tilldelar argumentet till 'titel'
    }
    string hämtaTitel() // metoden för att hämta titeln, denna returnerar titeln dit den blir kallad
    {
        return titel;
    }
};
int main()
{
    
    Billboard låt1, låt2, låt3; // Billboarden har tre låtar på listan... låt1, låt2 etc
    cout << "Welcome to the billboard!" << endl
         << "Hope you brought earplugs... \n" << endl;
    låt1.sättTitel("1. Barbie Girl - Aqua"); // kallar på metoden sättTitel och tilldelar låt 1 med texten.. 
    låt2.sättTitel("2. Cotton eyed Joe - Rednex");
    låt3.sättTitel("3. Wake me up before you go go - Wham!");

    cout << låt1.hämtaTitel() << endl; // anropar låt1.hämtaTitel och skriver ut det som metoden returnerar
    cout << låt2.hämtaTitel() << endl;
    cout << låt3.hämtaTitel() << endl;
    return 0;
}