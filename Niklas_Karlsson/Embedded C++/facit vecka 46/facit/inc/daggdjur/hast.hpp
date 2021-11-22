#include "daggdjur.hpp"

#ifndef H_HAST__
#define H_HAST__

// Häst ärver funktioner/metoder och class variabler
// Från däggdjurs-classen
class Häst : public Däggdjur
{
public:
    // Initerar utan parametrar / argument
    Häst(void)
    {
        // inga argument
    }
    Häst(std::string _namn, int _ålder) : Däggdjur(_namn, _ålder)
    {
        // variabel 'namn' kommer från Däggdjur-klassen
        // Går bra att använda _namn eller namn då vi ärver 'protected:'
        std::cout << "Vi har fått en ny familjemedlem vars namn är: " << namn << std::endl;
    }
    ~Häst(void);

    void prata();

private:
    // std::string ras;
};

#endif