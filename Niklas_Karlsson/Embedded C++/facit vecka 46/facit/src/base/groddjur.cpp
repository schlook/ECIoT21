#include "groddjur.hpp"

// Vi sätter ålder för alla våra groddjur
// parametrar int a = ålder
//
void Groddjur::sättÅlder(int a)
{
    // Utökad kontroll för att se om namnet är satt eller icket.
    // .empty() är en del av std::string
    if (this->namn.empty())
    {
        std::cout << "Du har inte angett något namn för ditt djur!" << std::endl;
    }
    else
    {
        std::cout << "Ålder för " << this->namn << " är nu " << a << std::endl;
        this->ålder = a;
    }
}

// Vi sätter topphastighet för våra groddjur
// @int t = lokal variabel 
void Groddjur::sättTopphastighet(int t)
{
    // Utökad kontroll för att se om namnet är satt eller icket.
    // .empty() är en del av std::string
    if (this->namn.empty())
    {
        std::cout << "Du har inte angett något namn för ditt djur!" << std::endl;
    }
    else
    {
        this->topphastighet = t;
        std::cout << "Topphastigheten för " << this->namn << " har satts till: " << t << std::endl;
    }
}


void Groddjur::sättHälsa(bool h)
{
    // Utökad kontroll för att se om namnet är satt eller icket.
    // .empty() är en del av std::string
    if (this->namn.empty())
    {
        std::cout << "Du har inte angett något namn för ditt djur!" << std::endl;
    }
    else
    {
        std::cout << this->namn << " hälsotillstånd är " << (h ? "frisk" : "sjuk") << std::endl;
        this->hälsa = h;
    }
}

void Groddjur::sättKön(bool k)
{
    // Utökad kontroll för att se om namnet är satt eller icket.
    // .empty() är en del av std::string
    if (this->namn.empty())
    {
        std::cout << "Du har inte angett något namn för ditt djur!" << std::endl;
    }
    else
    {
        std::cout << this->namn << " är en: " << (k ? "Hane" : "Hona") << std::endl;
        this->kön = k;
    }
}

void Groddjur::sättVikt(double v)
{
    // Utökad kontroll för att se om namnet är satt eller icket.
    // .empty() är en del av std::string
    if (this->namn.empty())
    {
        std::cout << "Du har inte angett något namn för ditt djur!" << std::endl;
    }
    else
    {
        std::cout << this->namn << " gick upp " << v << " kg" << std::endl;
        this->vikt = v;
    }
}

void Groddjur::sättNamn(std::string n)
{
    // sätter namn till värdet av n
    this->namn = n;
}

// Matar djuret och går bara upp.
void Groddjur::mata(std::string typavmat, int gram)
{
    // this->sättvikt kommer från däggdjur-klassen
    std::cout << "Gott med " << typavmat << std::endl;
    this->sättVikt(gram / 100.0);
}

/*
 * Allt som rör hämta
 */

double Groddjur::hämtaVikt(void)
{
    return this->vikt;
}

bool Groddjur::hämtaKön(void)
{
    return this->kön;
}

int Groddjur::hämtaTopphastighet(void)
{
    return this->topphastighet;
}

bool Groddjur::hämtaHälsa(void)
{
    return this->hälsa;
}

std::string Groddjur::hämtaNamn(void)
{
    // 
    if (this->namn.empty())
    {
        std::string unknown = "Okänt";
        // Kommer stanna här, kod efter denna return körs aldrig.
        return unknown;
    }

    // Om villkoret ovan inte stämmer returnerar vi namnet.
    return this->namn;
}

int Groddjur::hämtaÅlder(void)
{
    return this->ålder;
}