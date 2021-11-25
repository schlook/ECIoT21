#include "fagel.hpp"

#ifndef H_UNDERLAT__
#define H_UNDERLAT__

// Första ärvda klassen
class Underlat : public Fågel
{
public:
    // Initerar utan parametrar / argument
    Underlat(void)
    {
        // inga argument
    }
    Underlat(std::string _namn, int _ålder) : Fågel(_namn, _ålder)
    {
        // variabel 'namn' kommer från Fågel-klassen
        // Går bra att använda _namn eller namn då vi ärver 'protected:'
        std::cout << "Vi har fått en ny familjemedlem vars namn är: " << namn << std::endl;
    }
    ~Underlat(void);

    void prata();

private:
    // std::string ras;
};

#endif