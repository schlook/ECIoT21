// Kan anitngen inkludera alla filer, eller spara
// Spara dom i en samlad fil.
#include "deps.hpp"

// huvudfunktionen
int main()
{
    // Initierar hund som hunden, vi skickar argument att hunden ska heta buster och att buster är 12 år.
    Hund hunden("Buster", 12);
    // Hunden säger något.
    hunden.prata();
    // Hundens vikt är 11.2 kg
    hunden.sättVikt(11.2);
    // Skriver ut åldern med hjälp av att funktionen "return" ett  värde.
    std::cout << hunden.hämtaÅlder() << std::endl;

    // Ny rad
    std::cout << std::endl;

    // Initerar klass Katt, som kisse. Vi anger att kisse ska heta nisse och att katten är 5 år
    Katt kisse("Nisse", 5);
    // Vår katt säger något, mjau kanske
    kisse.prata();
    // Sätter 5.0 (5 kg i double)
    kisse.sättVikt(5.0);
    
    // Skriver ut text, genom "return" i funktionerna får vi ut värdet
    // Som lagrats i funktionerna.
    std::cout << kisse.hämtaNamn() << " är " << kisse.hämtaÅlder() << " år gammal " << std::endl;
    // Mata katten med en råtta
    kisse.mata("råtta", 123);

    // Ny rad
    std::cout << std::endl;

    // Kan också initerera klassen utan parametrar/argument
    // Minigris är klassen och nöffe är 
    Minigris nöffe;
    // Säger att vi vill döpa den till NöffeGris.
    nöffe.sättNamn("NöffeGris");
    // Sätt att åldern på nöffe är 12 år.
    nöffe.sättÅlder(12);

    // Skapar en duva
    Duva ulf;

    // Ger duvan ett namn.
    ulf.sättNamn("Ulf");

    // Här kan du anropa fler djur på liknande vis.
    // Notera att när sista classen kört färdigt allt sitt.
    // Kommer alla classer att köra sina destruktorer, samtidigt.


    return 0;
}