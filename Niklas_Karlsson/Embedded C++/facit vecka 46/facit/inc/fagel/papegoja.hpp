#include "fagel.hpp"

#ifndef H_PAPEGOJA__
#define H_PAPEGOJA__

// Första ärvda klassen
class Papegoja : public Fågel
{
public:
    // Initerar utan parametrar / argument
    Papegoja(void)
    {
        // inga argument
    }
    Papegoja(std::string _namn, int _ålder) : Fågel(_namn, _ålder)
    {
        // variabel 'namn' kommer från Fågel-klassen
        // Går bra att använda _namn eller namn då vi ärver 'protected:'
        std::cout << "Vi har fått en ny familjemedlem vars namn är: " << namn << std::endl;
    }
    ~Papegoja(void);

    void prata();

private:
    // std::string ras;
};

#endif