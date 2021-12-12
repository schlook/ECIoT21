#include <iostream>// standard bibliotek
#include <fstream> // för att kunna öppna filer (std::ifstream
#include <string>
#include <stdexcept> // try/throw/catch

// för att använda sleep
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

int main()
{
    /* gender för inmatarens fråga om "pojke" eller "flicka"
    namn är det namn som matas in medans 'person' är namnen i listan */
    std::string gender, namn, person; 
    std::ifstream inputFile; // ifstreamen 'inputFile' som öppnar våra filer
    bool _bool; // hanterar om de varit stygga (0) eller snälla (1)
    bool found = 1; // 1 = false, om inte namn hittades i listorna för då ändras den till '0', true

    std::cout << "******************************** ~Välkommen till Tomtens snäll- och stygg-lista~ ********************************" << std::endl;
    sleep(2);

    std::cout << "\nÄr du 'pojke' eller 'flicka': "; std::cin >> gender;
    if(gender.compare("pojke") == 0) // jämför inmatad variabel 'gender' men "pojke", 0 = true
    {
        inputFile.open("pojknamn.txt"); // om gender och "pojke" stämmer överens öppnas filen "pojknamn.txt"
    }
    else if(gender.compare("flicka") == 0) // kontrollerar om gender stämmer överens med "flicka"
    {
        inputFile.open("flicknamn.txt");
    }
    else // om annat angavs så körs else, felmedelande skrivs ut och programmet stängs
    {
        std::cout << "Fel inmatning" << std::endl;
        exit(1);
    }
        std::cout << "\nSkriv in ditt namn: "; std::cin >> namn;
    try // vårt try-block, testar koden nere
    {
        while (inputFile >> person >> _bool) // whileloopen använder ifstreamen 'inputFile' för att loopa igenom filen med namn och boolean (0 eller 1)
        {
            if (person == namn) // om något namn från listan stämmer överens med det vi matade in stannar den där och går vidare med det nedanför
            {
                if(_bool == 0) // om boolean intill namnet i listan är '0' körs denna
                {
                    std::cout << "\nTomten säger att du har varit stygg i år, det blir inga julklappar för dig " << namn << "!" << std::endl;
                } // om inte dvs '1' körs denna
                else { std::cout << "\nTomten säger att du har varit snäll! ho, ho ho! God jul på dig " << namn << "!" << std::endl; }
                
                found = 0; // namn hittades därför ändras found till 0, dvs true
            }
        }
        if (found == 1) // efter whileloopen kontrolleras om namn stämde överens med någon från listan. Dvs om found fortfarande är 1 (false)
        {
            /* och kastar, 'invalid_argument' är namnet på vår exception. Kan egentligen döpas till vad som helst.
            kastar tillsammans med extra informationen dvs medelandet */
            throw std::invalid_argument("\nTomten känner inte igen dig, detta måste tas upp vid nästa nisse-möte!"); 
        }
        inputFile.close(); // sist av allt stängs filen, dock endast om den INTE throwat, isf gick den direkt från throw --> catch.
    }
    catch (std::invalid_argument &ex) // tar emot det som kastades. invalid_argument är namnet på exceptionet och &ex står för medelandet, används med .what()
    {
        /* std::cerr = standard error stream, strömmen för errorutskrift 
        ex.what() anropas när man vill ha med den text som angavs som extra information iom throw */
        std::cerr << ex.what() << std::endl; // skriver ut: Tomten känner inte igen dig...
        inputFile.close(); // utan denna hade filen fortfarande varit öppen när programmet avslutats och den throwat / catchat
    }
    return 0;
}