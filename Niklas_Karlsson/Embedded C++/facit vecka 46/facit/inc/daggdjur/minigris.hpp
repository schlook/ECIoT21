#include "daggdjur.hpp"

#ifndef H_MINIGRIS__
#define H_MINIGRIS__

// Minigris ärver funktioner/metoder och class variabler
// Från däggdjurs-classen
class Minigris : public Däggdjur
{
public:
    // Initerar utan parametrar / argument
    Minigris(void)
    {
        // inga argument
    }
    Minigris(std::string _namn, int _ålder) : Däggdjur(_namn, _ålder)
    {
        // variabel 'namn' kommer från Däggdjur-klassen
        // Går bra att använda _namn eller namn då vi ärver 'protected:'
        std::cout << "Vi har fått en ny familjemedlem vars namn är: " << namn << std::endl;
    }
    ~Minigris(void);

    void prata();

private:
    // std::string ras;
};

#endif