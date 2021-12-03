#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Temp
{
private:
    vector<double> t; // skapar vector 't' som private i vår Temp klass

public:
    void tempMätare(double temp) { t.push_back(temp); } // metod som tar emot argument (temp) och med push_back lägger den sist i vectorn 't'
    void visaTemp() { for (auto i : t) { cout << i << endl; } } // metod som med 'auto' skriver ut samtliga element i vectorn
};
int main()
{   
    Temp te; // skapar objekt 'te' av klassen Temp 
    double temp; // variablen för temp
    string svar; // variabeln för svar (j/n)
    
    while(true) // true == körs tills dens bryts inifrån
    {   
        cout << "Ange temp: "; cin >> temp;
        te.tempMätare(temp); // anropar metoden med objektet 'te' och temp som agrument

        cout << "Vill du fortsätta? (j/n)" << endl; cin >> svar;
        if(svar == "j" || svar == "J")
        {
            continue; // gå ur if-satsen och vidare med while
        }
        else if(svar == "n" || svar == "N")
        {
            break; // om 'n' || 'N' bryt while
        }
        else { cout << "Ogiltig inmatning.." << endl; }
    }
    te.visaTemp(); // visa angivna temp

    return 0;
}