#include "daggdjur.hpp"

#ifndef H_OKENRATTA__
#define H_OKENRATTA__

// Ökenråtta ärver funktioner/metoder och class variabler
// Från däggdjurs-classen
class Ökenråtta : public Däggdjur
{
public:
    // Initerar utan parametrar / argument
    Ökenråtta(void)
    {
        // inga argument
    }
    Ökenråtta(std::string _namn, int _ålder) : Däggdjur(_namn, _ålder)
    {
        // variabel 'namn' kommer från Däggdjur-klassen
        // Går bra att använda _namn eller namn då vi ärver 'protected:'
        std::cout << "Vi har fått en ny familjemedlem vars namn är: " << namn << std::endl;
    }
    ~Ökenråtta(void);

    void prata();

private:
    // std::string ras;
};

#endif