#include <iostream>
#include <string> // för att använda strängar

class anställd // deklarerar en class med namn 'anställd', har två objekt, string namn och long int anställningsnummer
{   
private: // satt privata så att de endast kan anropas innanför klassens instans
    std::string namn;
    long anställningsNummer;

public: // med public går att nå utan för klassens kodblock
    void hämtaData() // funktion i klassen för att hämta inmatning från användaren
    {
        std::cout << "Ange namn:" << std::endl;
        std::cin >> namn;
        std::cout << "Ange anställningsnummer:" << std::endl;
        std::cin >> anställningsNummer;
    }
    void visaData() // funktion för att skriva ut
    {
        std::cout << "Namn: " << namn << std::endl;
        std::cout << "Anställningsnummer: " << anställningsNummer << std::endl;
    }
};

int main()
{
    anställd anställda[100]; // deklarerar en fältvariabel på 100 element av typ 'anställd'
    int n = 0; // antalet element eller antalet anställda
    char svar; // representerar j/n

    do // körs tills 'n' anges
    {
        std::cout << "Ange anställningsinformation för anställd nr: " << n + 1 << std::endl;
        anställda[n++].hämtaData();
        std::cout << "Ange en annan? (j/n)" << std::endl;
        std::cin >> svar;
    } while (svar == 'j'); // om svar lika med 'j' så körs do-while igen
    
    for (int j = 0; j < n; j++) // skriver ut samtliga anställda
    {
        std::cout << "\nAnställd nummer: " << j + 1 << std::endl;
        anställda[j].visaData();
    }
    return 0;
}

