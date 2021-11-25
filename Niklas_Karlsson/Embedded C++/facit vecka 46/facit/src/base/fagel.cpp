#include "deps.hpp"

// Vi sätter ålder för alla våra fågeldjur
// parametrar int a = ålder
void Fågel::sättÅlder(int a)
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

// Vi sätter topphastighet för vårt fågeldjur
// parametrar int t = topphastighet
//
void Fågel::sättTopphastighet(int t)
{
    // Utökad kontroll för att se om namnet är satt eller icket.
    // .empty() är en del av std::string
    if (this->namn.empty())
    {
        std::cout << "Du har inte angett något namn för ditt djur!" << std::endl;
    }
    else
    {
        // Sätter  topphastighet till värdet av t
        this->topphastighet = t;
        std::cout << "Topphastigheten för " << this->namn << " har satts till: " << t << std::endl;
    }
}

// Vi sätter topphastighet för vårt fågeldjur
// int t = lokal variabel
void Fågel::sättHälsa(bool h)
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
        // sätter hälsa i fågelddjur till värdet av 'h'
        this->hälsa = h;
    }
}

// Vi sätter topphastighet för vårt fågeldjur
// bool k = lokal variabel
void Fågel::sättKön(bool k)
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
        // sätter kön till värdet av k
        this->kön = k;
    }
}

// Vi sätter topphastighet för vårt fågeldjur
// double v = lokal variabel
void Fågel::sättVikt(double v)
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
        // sätter vikt till värdet av v
        this->vikt = v;
    }
}

void Fågel::sättNamn(std::string n)
{
    // sätter namn till värdet av n
    this->namn = n;
}

// Matar djuret och går bara upp.
void Fågel::mata(std::string typavmat, int gram)
{
    // this->sättvikt kommer från däggdjur-klassen
    std::cout << "Gott med " << typavmat << std::endl;
    this->sättVikt(gram / 100.0);
}

/*
 * Allt som rör hämta
 */

// Vi hämtar vikt för vårt fågeldjur
// inga värden accepteras när vi kallar på funktionen
// Ger ett double-värde
double Fågel::hämtaVikt(void)
{
    // Ger till svar vad värdet av vikt är
    return this->vikt;
}

// Vi hämtar vikt för vårt fågeldjur
// Inga värden accepteras när vi kallar på funktionen
// Ger ett bool-värde (1 eller 0)
bool Fågel::hämtaKön(void)
{
    return this->kön;
}

// Vi hämtar hälsan för vårt fågeldjur
// Inga värden accepteras när vi kallar på funktionen
// Ger bool-värde (1 eller 0)
bool Fågel::hämtaHälsa(void)
{
    return this->hälsa;
}

// Vi hämtar namn för våra fågeldjur
// Inga värden accepteras när vi kallar på funktionen
// Ger svar i std::string
std::string Fågel::hämtaNamn(void)
{
    // kollar om det är satt
    if (this->namn.empty())
    {
        std::string unknown = "Okänt";
        // Kommer stanna här, kod efter denna return körs aldrig.
        return unknown;
    }

    // Om villkoret ovan inte stämmer returnerar vi namnet.
    return this->namn;
}

// Inga värden accepteras när vi kallar på funktionen
// ger svar i heltal (int)
int Fågel::hämtaÅlder(void)
{
    // kollar om det är satt (mindre eller lika med noll, då är något knasigt)
    if (this->ålder <= 0)
    {
        // Kommer stanna här, kod efter denna return körs aldrig.
        // Säger att djuret är 0..
        return 0;
    }
    return this->ålder;
}