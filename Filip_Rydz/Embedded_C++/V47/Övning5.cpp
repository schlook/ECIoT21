#include <iostream>
#include <vector>
#include <string>

// för att kunna använda sleep(), olika bilbliotekt beroende på om Windows eller Mac/linux.
#ifdef _WIN32 
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

int n;


class Telefonbok
{
    string fNamn;
    string eNamn;
    int nummer;
public:
    
    void läggTillNamn() { cout << "Förnamn: "; cin >> fNamn; cout << "Efternamn: "; cin >> eNamn; }
    
    string hämtafNamn()  { return fNamn; }
    
    string hämtaeNamn()  { return eNamn; }

    void läggTillNummer() { cout << "Nummer: "; cin >> nummer; }
   
    int hämtaNummer() {return nummer;}
    
    string kollaUpp()
    {
        return fNamn;
    }
    void skrivUt(string namn)
    {
        cout << "Namn: " << fNamn << " " << eNamn << endl
             << "Nummer: " << nummer << endl;
    }
    void taBort(string namn)
    {
        cout << "Inte fått till det än" << endl;
    }
};
vector<Telefonbok> Kontakter;
Telefonbok kontakt; // Create object
void meny()
{ 
    int val;
    string namnSök;
    string test;
    int hitta = 0;  
    
    cout << "\nVad vill du göra: " << endl; sleep(1);
    cout << "1. Visa hela kontaktlistan\n2. Söka efter kontakt\n3. Lägga till kontakt\n4. Ta bort kontakt\n5. Avsluta" << endl; 
    cin >> val;

    switch (val)
    {
          
    case 1:
        for(Telefonbok & e : Kontakter)
        {
            cout << "\nKontakt:" << endl;
            cout << e.hämtafNamn() << " " << e.hämtaeNamn() << endl;
            cout << "Nummer: " << e.hämtaNummer() << endl;
        }
        break;
    case 2:
        cout << "Skriv namn på den du vill kolla upp: "; cin >> namnSök;
        
        for(Telefonbok & e : Kontakter)
        {
            if(e.kollaUpp().compare(namnSök) == 0) 
            {
                e.skrivUt(namnSök);
                hitta = 1;
            }
        }
        if(hitta == 0) { cout << "Namnet du sökte efter finns inte i listan.." << endl; }
        break;
    case 3:
        cout << "Hur många kontakter vill du lägga till: "; cin >> n;
        
        for (int i = 0; i < n; i++)
        {
            // Telefonbok kontakt; // Create object

            kontakt.läggTillNamn(); // Fill object

            kontakt.läggTillNummer(); // Keep filling it

            cout << "Du lade till: " << endl << kontakt.hämtafNamn() << " " << kontakt.hämtaeNamn() << endl; cout << kontakt.hämtaNummer() << endl;
            
            Kontakter.emplace_back(kontakt); // Add to vector
        }
        break;
    case 4:
        cout << "Skriv namn på den du vill ta bort: "; cin >> namnSök;
        
        for(Telefonbok & e : Kontakter)
        {
            if(e.kollaUpp().compare(namnSök) == 0) 
            {
                e.taBort(namnSök);
                hitta = 1;
            }
        }
        if(hitta == 0) { cout << "Namnet du ville ta bort finns inte i listan.." << endl; }
        break;
    case 5:
        exit(1);
    default:
        cout << "Fel val, prova igen" << endl;
        break;
    } 

}

int main()
{
    cout << "\nVälkommen till din Telefonbok!" << endl << endl; sleep(2);
    
    while (1)
    {
        meny();
    }
    return 0;
}
