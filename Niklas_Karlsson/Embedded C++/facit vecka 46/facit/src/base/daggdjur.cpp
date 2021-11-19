#include "deps.hpp"

// Anger definitionen av vår metod
// Parameter / Argument: int a = ålder
// 
void Däggdjur::sättÅlder(int a)
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

// Anger definitionen av vår metod
// Parameter / Argument: int t = topphastighet
//
void Däggdjur::sättTopphastighet(int t)
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

// Anger definitionen av vår metod
// Parameter / Argument: bool h = hälsa
//
void Däggdjur::sättHälsa(bool h)
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

// Anger definitionen av vår metod
// Parameter / Argument: bool k = kön
//
void Däggdjur::sättKön(bool k)
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

// Anger definitionen av vår metod
// Parameter / Argument: double v = vikt
//
void Däggdjur::sättVikt(double v)
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

void Däggdjur::sättNamn(std::string n)
{
    // sätter namn till värdet av n
    this->namn = n;
}

// Matar djuret och går bara upp.
void Däggdjur::mata(std::string typavmat, int gram)
{
    // this->sättvikt kommer från däggdjur-klassen
    std::cout << "Gott med " << typavmat << std::endl;
    this->sättVikt(gram / 100.0);
}

    /*
 * Allt som rör hämta
 */

    // Hämtar vikt och returnerar värdet.
    // Kontroller kan göras om vikten verkligen är satt.
    double Däggdjur::hämtaVikt(void)
{
    // 
    return this->vikt;
}

// Hämtar kön och returnerar värdet.
// Kontroller kan göras om könet verkligen är satt.
bool Däggdjur::hämtaKön(void)
{
    //
    return this->kön;
}

// Hämtar hälsan och returnerar värdet.
// Kontroller kan göras om hälsan verkligen är satt.
bool Däggdjur::hämtaHälsa(void)
{
    //
    return this->hälsa;
}

// Hämtar namn och returnerar värdet.
// Kontroller kan göras om namnet verkligen är satt.
std::string Däggdjur::hämtaNamn(void)
{
    // std::string har en funktion som är .empty()
    // kallas genom variabeln, inte datatypen "string"
    if (this->namn.empty())
    {
        std::string unknown = "Okänt";
        // Kommer stanna här, kod efter denna return körs aldrig.
        return unknown;
    }

    // Om villkoret ovan inte stämmer returnerar vi namnet.
    return this->namn;
}

// Hämtar ålder och returnerar värdet.
// Kontroller kan göras om ålder verkligen är satt.
int Däggdjur::hämtaÅlder(void)
{
    return this->ålder;
}