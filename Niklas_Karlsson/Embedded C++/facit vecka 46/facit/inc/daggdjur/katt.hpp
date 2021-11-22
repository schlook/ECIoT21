#include "daggdjur.hpp"

#ifndef H_KATT__
#define H_KATT__

// Katt ärver funktioner/metoder och class variabler
// Från däggdjurs-classen
class Katt : virtual public Däggdjur
{
public:
    // Initerar utan parametrar / argument
    Katt(void)
    {
        // inga argument
    }
    Katt(std::string _namn, int _ålder) : Däggdjur(_namn, _ålder)
    {
        // variabel 'namn' kommer från Däggdjur-klassen
        // Går bra att använda _namn eller namn då vi ärver 'protected:'
        std::cout << "Vi har fått en ny familjemedlem vars namn är: " << namn << std::endl;
    }
    ~Katt(void);
    void prata();
    // Om ett argument anges så skrivs en text ut
    // Annars går vi upp gramen
    void mata(std::string typavmat, int gram);
    void mata(std::string typavmat)
    {
        std::cout << "Matar katten med en " << typavmat << std::endl;
    }

    // Lägger på 2 år för varje "människoår" (EJ KORREKT JAG VET, bara simulering, rätta om du orkar)
    int hämtaÅlder()
    {
        return this->ålder + 2;
    }
protected:
    // std::string ras;
};

#endif