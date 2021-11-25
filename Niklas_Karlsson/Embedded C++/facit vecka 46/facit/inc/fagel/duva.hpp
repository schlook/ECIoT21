#include "fagel.hpp"

#ifndef H_DUVA__
#define H_DUVA__

// Duva ärver funktioner/metoder och class variabler
// Från däggdjurs-classen
class Duva : public Fågel
{
public:
    // Initerar utan parametrar / argument
    Duva(void)
    {
        // inga argument
    }
    Duva(std::string _namn, int _ålder) : Fågel(_namn, _ålder)
    {
        // variabel 'namn' kommer från Fågel-klassen
        // Går bra att använda _namn eller namn då vi ärver 'protected:'
        std::cout << "Vi har fått en ny familjemedlem vars namn är: " << namn << std::endl;
    }
    ~Duva(void);

    void prata();

private:
    // std::string ras;
};

#endif