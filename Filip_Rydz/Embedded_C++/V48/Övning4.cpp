#include <iostream>
#include <vector>
#include <tuple>
#include <string>

using namespace std;

char svar; // om vi vill fortsätta (senare i programmet), sätts global så den kan nås överallt

class Temperatur
{
private: // satt privata så att de endast kan nås innifrån klassen
    vector<tuple<string, string, double, double>> väderStation; // vector av typen tuple, variabler för Dag, Månad, tid och temp
    string dag, månad;
    double tid, temp;
public:
    void sättVärden() // sätter värden från inmatning
    {
        cout << "Dag: "; cin >> dag;
        cout << "Månad: "; cin >> månad;
        cout << "Tid: "; cin >> tid;
        cout << "Temperatur: "; cin >> temp;
        
        väderStation.emplace_back(dag, månad, tid, temp); // med emplace_back placeras variablerna för vardera element längst bak i vectorn
    }
    void skrivUt()
    {
        for(auto &i : väderStation) // loopar ut varje element i vectorn. <0>, <1> representerar innehållet, (i) varje element .
        {
            cout << get<0>(i) << " " // dag 
                 << get<1>(i) << " " // månad
                 << get<2>(i) << " " // tid
                 << get<3>(i) << endl; // temp
        }
    }
};
void villDuVidare() // funktion som är utanför klass-instansen, denna sköter frågan om du vill fortsätta eller inte
{
    while(1) // (1) dvs true, körs tills dess att den avbryts innifrån sig själv (break)
    {
        cout << "Vill du mata in för fler dagar: (j/n)" << endl; cin >> svar;
    
        if(svar == 'n' || svar == 'N') { break; }
    
        else if(svar == 'j' || svar == 'J') { break; }
    
        else { cout << "Ogiltig inmatning, försök igen." << endl; } // allt annat ger felmedelande och frågan upprepas
    }
}
int main()
{
    Temperatur värde; //skapar objekt
    
    cout << "Väderstationen är öppen, mata in värden:" << endl;
    while(1)
    {
        värde.sättVärden(); // anropar metoden för att mata in värden i vectorn
        villDuVidare(); // vill du fortsätta (j/n), när den breaks kommer vi tillbaka hit.
        // då char svar ligger globalt kan vi använda den här. om 'n' eller 'N' bryts denna while och värdena skrivs ut
        if(svar == 'n' || svar == 'N') { break; }
        else { continue; } // om inte det så fortsätter while-loopen 
    }
    värde.skrivUt();
    return 0;
}