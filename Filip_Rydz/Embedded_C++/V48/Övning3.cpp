#include <iostream>
#include <vector>

using namespace std;

class Temperatur
{
private:
    vector<pair<string, double>> par; // skapar en vector av par (pair), tar emot två variabler, en sträng och en double.
public:
    string suffix; // denna används i konstruktorn, representerar °C eller °F. 
    Temperatur(bool enhet) // konstruktorn har samma namn som classen, tar emot ett argument. dvs 0 eller 1.
    {
        
        if(enhet == 0) // om 0 så sätts suffixet till °F dvs farenheit
        {
            suffix = "°F";
        }
        else if(enhet == 1) // om 1 så sätts suffixet till °C dvs Celsius
        {
            suffix = "°C";
        }
    }
    // metod för att ange dag och temp, tar emot 2 argument, dag och temp, emplace_back måste användas vid pair för att placera längst back. (annars används push_back)
    void mätare(string dag, double temp) { par.emplace_back(dag, temp); } 
    void utskrift() // metod som skriver ut allt innehåll från vectorn
    { 
        for(auto i : par) // auto ges namnet 'i' och går igenom vectorn 'par' början till slut. i=0, i=1 osv
        {
            cout << "Veckodag: \t" << i.first << endl; // då vi använder pair blir första 'first' andra 'second'
            cout << "Uppmätt temp:   " << i.second << suffix << endl << endl; // skriver ut temp + suffix dvs °C eller °F
        }
    }
};
int main()
{   
    /* konstruktorn döps till 'mätning' och kallas med ett bifogat argument, 0 eller 1. Beroende på om vi vill ha F eller C
    Konstruktorn sätter en parameter för följer med i hela programet. Konstruktorn är också det som körs först. */
    Temperatur mätning (1); 
    
    mätning.mätare("Måndag", -10.8); //med mätning kallas på metoden 'mätare' som sätter dag och temp.
    mätning.mätare("Tisdag", -13.3);
    mätning.mätare("Onsdag", -8.8);
    mätning.mätare("Torsdag", -14.2);
    mätning.mätare("Fredag", -25.3);
    mätning.mätare("Lördag", -16.7);
    mätning.mätare("Söndag", -15.1);

    mätning.utskrift(); // kallar på metoden för utskrift

    return 0;
}
