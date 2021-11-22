#include "daggdjur.hpp"

#ifndef H_KANIN__
#define H_KANIN__

// Kanin ärver funktioner/metoder och class variabler
// Från däggdjurs-classen
class Kanin : public Däggdjur
{
public:
    Kanin(void)
    {
        // inga argument
    }
    Kanin(std::string _namn, int _ålder) : Däggdjur(_namn, _ålder)
    {
        // variabel 'namn' kommer från Däggdjur-klassen
        // Går bra att använda _namn eller namn då vi ärver 'protected:'
        std::cout << "Vi har fått en ny familjemedlem vars namn är: " << namn << std::endl;
    }
    ~Kanin(void);

    void prata();

private:
    // std::string ras;
};

#endif