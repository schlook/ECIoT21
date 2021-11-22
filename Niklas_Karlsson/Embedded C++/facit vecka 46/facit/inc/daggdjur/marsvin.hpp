#include "daggdjur.hpp"

#ifndef H_MARSVIN__
#define H_MARSVIN__

// Marsvin ärver funktioner/metoder och class variabler
// Från däggdjurs-classen
class Marsvin : public Däggdjur
{
public:
    // Initerar utan parametrar / argument
    Marsvin(void)
    {
        // inga argument
    }
    Marsvin(std::string _namn, int _ålder) : Däggdjur(_namn, _ålder)
    {
        // variabel 'namn' kommer från Däggdjur-klassen
        // Går bra att använda _namn eller namn då vi ärver 'protected:'
        std::cout << "Vi har fått en ny familjemedlem vars namn är: " << namn << std::endl;
    }
    ~Marsvin(void);

    void prata();

private:
    // std::string ras;
};

#endif