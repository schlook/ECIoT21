#include "daggdjur.hpp"

#ifndef H_RATTA__
#define H_RATTA__

// Råtta ärver funktioner/metoder och class variabler
// Från däggdjurs-classen
class Råtta : public Däggdjur
{
public:
    // Initerar utan parametrar / argument
    Råtta(void)
    {
        // inga argument
    }
    Råtta(std::string _namn, int _ålder) : Däggdjur(_namn, _ålder)
    {
        // variabel 'namn' kommer från Däggdjur-klassen
        // Går bra att använda _namn eller namn då vi ärver 'protected:'
        std::cout << "Vi har fått en ny familjemedlem vars namn är: " << namn << std::endl;
    }
    ~Råtta(void);

    void prata();

private:
    // std::string ras;
};

#endif