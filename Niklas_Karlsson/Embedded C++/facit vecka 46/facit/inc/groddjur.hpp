
// Inkluderings-skydd
// Om H_GRODDJUR__ inte är definierad.
#ifndef H_GRODDJUR__
#define H_GRODDJUR__

#include <iostream>
#include <string>

class Groddjur
{
public:
    // Destruktor
    ~Groddjur(void)
    {
        // Gör ingenting
    }
    /* Allt som gäller sätt */
    // Funktion för att sätta ålder.
    // Funktionen ger inget värde tillbaka om den är satt som void
    void sättÅlder(int a);
    // Sätter topphastighet för ett däggdjur
    void sättTopphastighet(int t);
    // Sätter hälsa för ett däggdjur
    void sättHälsa(bool h);
    // Sätter kön för ett djur
    void sättKön(bool k);
    // Sätter vikt för ett djur
    void sättVikt(double v);
    // Sätter namn för djur
    void sättNamn(std::string n);
    // Hämta saker
    double hämtaVikt(void);
    // Hämtar kön för ett djur (ger svar i bool)
    bool hämtaKön(void);
    // Hämtar hälsa för ett djur (ger svar i bool)
    bool hämtaHälsa(void);
    // Hämtar topphastighet för ett djur (ger svar i int)
    int hämtaTopphastighet(void);
    // Hämtar ålder för ett djur (ger svar i int)
    int hämtaÅlder(void);
    // Hämtar namn för ett djur (ger svar i std::string)
    std::string hämtaNamn(void);
    // Om ett argument anges så skrivs en text ut
    // Annars går vi upp gramen
    void mata(std::string typavmat, int gram);
    void mata(std::string typavmat)
    {
        std::cout << "Matar med " << typavmat << std::endl;
    }

protected:
    Groddjur(void)
    {
    }
    Groddjur(std::string _namn, int _ålder)
        : namn(_namn), ålder(_ålder)
    {
    }
    // Allt måste ligga i samma ordning som constructorn kallar på variabler.

    // Djurets namn
    std::string namn;
    // Hur gammal den är
    // om den är -1 så har ingen ålder satts. (kan bli konstiga värden annars)
    int ålder = -1;
    // Vad djuret väger
    double vikt;
    // hur snabbt den kan springa
    int topphastighet;
    // Hane = 1, hona = 0?
    // vaken = 0, sover = 1?
    // Frisk = 1, sjuk 0?
    bool kön, sover, hälsa;
};

#endif