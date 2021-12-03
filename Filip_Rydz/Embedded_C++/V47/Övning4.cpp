#include <iostream>

using namespace std;

class Fordon // basklassen, har Märke, Topphast(kmH) och antal mil
{
public:
    string märke;
    int kmH;
    int mil;
};
class Buss : public Fordon // skapar bussklass som ärver 'märke', 'kmH' och 'mil' från fordon. 
{
public:
    int antalPlatser; // utöver vad som ärvs från basklassen 'fordon' har även class buss en egen, antalPlatser
    void angeMärke() {cout << "Ange märke för buss: "; cin >> märke; cout << endl;} // hämtar inmatning från användaren
    void topphast() {cout << "Topphastighet: "; cin >> kmH; cout << endl;}
    void angeMil() {cout << "Ange antal mil: "; cin >> mil; cout << endl;}
    void angePlatser() {cout << "Ange antal sittplatser: "; cin >> antalPlatser; cout << endl;}

    void skrivUt() // denna skriver ut informationen från klassen
    {
        cout << "Märke: " << märke << endl
             << "Topphastighet: " << kmH << endl
             << "Antal Mil: " << mil << endl
             << "Antal sittplatser: " << antalPlatser << endl << endl;
    }
};
class Bil : public Fordon // lika som med buss, ärver från Fordon samt att Bil har en egen dvs maxVikt
{
public:
    int maxVikt;
    
    void angeInfo() { angeMärke(); topphast(); angeMil(); angeMaxVikt(); } // en metod för att köra övriga metoder

    void angeMärke() {cout << "Ange märke för bil: "; cin >> märke; cout << endl;} // initierar metoderna
    void topphast() {cout << "Topphastighet: "; cin >> kmH; cout << endl;}
    void angeMil() {cout << "Ange antal mil: "; cin >> mil; cout << endl;}
    void angeMaxVikt() {cout << "Ange antal sittplatser: "; cin >> maxVikt; cout << endl;}

    void skrivUt() // metoden som skriver ut
    {
        cout << "Märke: " << märke << endl
             << "Topphastighet: " << kmH << endl
             << "Antal Mil: " << mil << endl
             << "Max vikt: " << maxVikt << endl << endl;
    }
};
int main()
{
    Buss buss1; // skapar objektet buss1
    buss1.angeMärke(); // kallar på metoden 'angeMärke' genom objektet 'buss1'
    buss1.topphast();
    buss1.angeMil();
    buss1.angePlatser();
    
    Bil bil1; // skapar objektet bil1
    bil1.angeInfo(); // kallar genom objektet på metoden 'angeInfo' som i sin tur kör övriga metoder i klassen.

    buss1.skrivUt(); // metoden som skriver ut insamlad information
    bil1.skrivUt();

    return 0;
}