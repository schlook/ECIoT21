#include <iostream>
#include <string>

// Klass person
class Person
{
public:
    std::string m_namn;
    int m_ålder;
    const std::string &hämtaNamn() { return m_namn; }
    int hämtaÅlder() { return m_ålder; }
    Person(const std::string &namn = "", int ålder = 0) : m_namn(namn), m_ålder(ålder)
    {
    }
};

// Anställd ärver från Person
class Anställd : public Person
{
public:
    double m_timlön;
    long m_anställnindsID;

    Anställd(double timlön = 0.0, long anställnindsID = 0)
        : m_timlön(timlön), m_anställnindsID(anställnindsID)
    {
    }

    void skrivNamnLön() const
    {
        std::cout << m_namn << ": " << m_timlön << '\n';
    }
};

class Chef : public Person
{
public:
    int m_undersåte;
    Chef(int antal) : m_undersåte(antal)
    {
    }

    void skrivutAntalet() const
    {
        std::cout << "Chefen har antal under sig: " << m_undersåte << std::endl;
    }
};

class BasketSpelare : public Person
{
public:
    std::string m_hemmaLag;
    int m_antalTrePoängare;
    BasketSpelare(std::string hemmaLag, int antalTrePoängare) : m_hemmaLag(hemmaLag), m_antalTrePoängare(antalTrePoängare)
    {
        std::cout << "Vår spelare spelar för " << m_hemmaLag
                  << " och har gjort antal tre poängare: " << m_antalTrePoängare << std::endl;
    }
};

// Main
int main()
{
    Anställd jens{20.25, 12345};
    // För att m_namn är "public"
    jens.m_namn = "Jens";

    jens.skrivNamnLön();

    Chef benny{22};
    benny.skrivutAntalet();

    BasketSpelare polly{"Västerås", 0};

    return 0;
}