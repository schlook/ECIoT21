#include "daggdjur.hpp"

// Inkluderings-skydd
// Om H_DEGU__ inte är definierad.
#ifndef H_DEGU__
// Så definierar vi den här
#define H_DEGU__

// Degu ärver funktioner/metoder och class variabler
// Från däggdjurs-classen
class Degu : public Däggdjur
{
public:
    // Initerar utan parametrar / argument
    Degu(void)
    {
        // inga argument
    }
    // Initerar utan parametrar / argument
    Degu(std::string _namn, int _ålder) : Däggdjur(_namn, _ålder)
    {
        // variabel 'namn' kommer från Däggdjur-klassen
        // Går bra att använda _namn eller namn då vi ärver 'protected:'
        std::cout << "Vi har fått en ny familjemedlem vars namn är: " << namn << std::endl;
    }
    // Stänger classen.
    ~Degu(void);

    void prata();

private:
    // std::string ras;
};

#endif