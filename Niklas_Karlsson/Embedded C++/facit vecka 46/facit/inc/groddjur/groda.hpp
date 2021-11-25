#include "groddjur.hpp"

#ifndef H_GRODA__
#define H_GRODA__

// Duva ärver funktioner/metoder och class variabler
// Från däggdjurs-classen
class Groda : public Groddjur
{
public:
    // Initerar utan parametrar / argument
    Groda(void)
    {
        
    }
    
    Groda(std::string _namn, int _ålder) : Groddjur(_namn, _ålder)
    {
        // variabel 'namn' kommer från Groddjur-klassen
        // Går bra att använda _namn eller namn då vi ärver 'protected:'
        std::cout << "Vi har fått en ny familjemedlem vars namn är: " << namn << std::endl;
    }
    ~Groda(void);

    void prata();

private:
    // std::string ras;
};

#endif