#include "daggdjur.hpp"

#ifndef H_MUS__
#define H_MUS__

// Mus ärver funktioner/metoder och class variabler
// Från däggdjurs-classen
class Mus : public Däggdjur
{
public:
    // Initerar utan parametrar / argument
    Mus(void)
    {
        // inga argument
    }
    Mus(std::string _namn, int _ålder) : Däggdjur(_namn, _ålder)
    {
        // variabel 'namn' kommer från Däggdjur-klassen
        // Går bra att använda _namn eller namn då vi ärver 'protected:'
        std::cout << "Vi har fått en ny familjemedlem vars namn är: " << namn << std::endl;
    }
    ~Mus(void);

    void prata();

private:
    // std::string ras;
};

#endif