#include "fagel.hpp"

#ifndef H_KANARIEFAGEL__
#define H_KANARIEFAGEL__

// Första ärvda klassen
class Kanariefågel : public Fågel
{
public: 
    // Initerar utan parametrar / argument
    Kanariefågel(void)
    {
        // inga argument
    }
    // Kan alltid fylla på eller skapa fler konstruktorer.
    Kanariefågel(std::string _namn, int _ålder) : Fågel(_namn, _ålder)
    {
        // variabel 'namn' kommer från Fågel-klassen
        // Går bra att använda _namn eller namn då vi ärver 'protected:'
        std::cout << "Vi har fått en ny familjemedlem vars namn är: " << namn << std::endl;
    }
    ~Kanariefågel(void);

    void prata();

private:
    // std::string ras;
};

#endif