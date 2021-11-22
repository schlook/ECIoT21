#include "daggdjur.hpp"

#ifndef H_HUND__
#define H_HUND__

// Hund ärver funktioner/metoder och class variabler
// Från däggdjurs-classen
class Hund : public Däggdjur
{
public:
    // Initerar utan parametrar / argument
    Hund(void)
    {
        // inga argument
    }
    // 
    Hund(std::string _namn, int _ålder) : Däggdjur(_namn, _ålder)
    {
        // variabel 'namn' kommer från Däggdjur-klassen
        // Går bra att använda _namn eller namn då vi ärver 'protected:'
        std::cout << "Vi har fått en ny familjemedlem vars namn är: " << namn << std::endl;
    }
    // Hund kan vara i egen fil, men går bra här också som "inline"
    ~Hund(void);
    // Få hunden att prata
    void prata();
private:
    // Fyll på med egna variabler för denna klass, som ras.
    // std::string ras;

};

#endif