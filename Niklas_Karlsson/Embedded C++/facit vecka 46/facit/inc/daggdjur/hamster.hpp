#include "daggdjur.hpp"

#ifndef H_HAMSTER__
#define H_HAMSTER__

// Hamster ärver funktioner/metoder och class variabler
// Från däggdjurs-classen
class Hamster : public Däggdjur
{
    
public:
    // Initerar utan parametrar / argument
    Hamster(void)
    {
        // inga argument
    }
    // Ett djur har blivit född.
    Hamster(std::string _namn, int _ålder) : Däggdjur(_namn, _ålder)
    {
        // variabel 'namn' kommer från Däggdjur-klassen
        // Går bra att använda _namn eller namn då vi ärver 'protected:'
        std::cout << "Vi har fått en ny familjemedlem vars namn är: " << namn << std::endl;
    }
    // Här kan man.. avliva djuret.
    ~Hamster(void);
    // Hur djuret låter
    void prata();

private:
    // std::string ras;
};

#endif