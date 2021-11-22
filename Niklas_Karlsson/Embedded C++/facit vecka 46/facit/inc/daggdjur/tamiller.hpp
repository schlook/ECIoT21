#include "daggdjur.hpp"

#ifndef H_TAMILER__
#define H_TAMILER__

// Tamiller/Tam-iller ärver funktioner/metoder och class variabler
// Från däggdjurs-classen
class Tamiller : public Däggdjur
{
public:
    // Initerar utan parametrar / argument
    Tamiller(void)
    {
        // inga argument
    }
    Tamiller(std::string _namn, int _ålder) : Däggdjur(_namn, _ålder)
    {
        // variabel 'namn' kommer från Däggdjur-klassen
        // Går bra att använda _namn eller namn då vi ärver 'protected:'
        std::cout << "Vi har fått en ny familjemedlem vars namn är: " << namn << std::endl;
    }
    ~Tamiller(void);

    void prata();

private:
    // std::string ras;
};

#endif