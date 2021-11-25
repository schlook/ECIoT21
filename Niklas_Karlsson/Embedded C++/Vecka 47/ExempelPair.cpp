#include <iostream>
#include <string>
#include <vector>

std::string const felmeddelandet = "Din telefonlista är TOM??";

class Telefonlista
{
private:
    // Får gå igenom denna mer. Bye krångel...
    // std::pair<std::string, std::string> tLista;
    // kan också göra så här:
    std::vector<std::pair<std::string, std::string>> fåne;

public:
    // Skapar Constructor för Telefonlistan
    Telefonlista(std::string mittNummer, std::string mittNamn)
    {
        // Gör ett par
        // tLista = std::make_pair(mittNummer, mittNamn);
        // Gör ett par så här med:
        // Känns mer rätt med emplace_back() (samma som push_back() men för PAR/PAIR)
        fåne.emplace_back(mittNummer, mittNamn);
        // Skriver ut 'first' som är en del av make_pair och 'second' med.
        // std::cout << "Första är: " << tLista.first << " och andra är: " << tLista.second << std::endl;
    }

    // Skriv ut kontaktlistan
    bool skrivUtKontakt(void)
    {
        // Enklare att loopa ur vectorn direkt.
        for (auto i : this->fåne)
        {
            // Åkalla .first och .second via PAIR (alltså PAR)
            // Finns inte tredje eller fjärde.
            std::cout << "Nummer: " << i.first << std::endl
                      << "Namn: " << i.second << std::endl;
        }

        // test
        this->fåne.clear();
        // Vad finns i vår vector nu?
        if (this->fåne.empty())
        {
            // Bool, return 0 för error.
            // Kan kolla upp med !skrivUtKontakt() för enklare kontroller.
            // Stannar här..
            return 0;
        }

        for (auto j : this->fåne)
        {
            // Åkalla .first och .second via PAIR (alltså PAR)
            // Finns inte tredje eller fjärde.
            std::cout << "Nummer: " << j.first << std::endl
                      << "Namn: " << j.second << std::endl;
        }
        // Sweet, den var tom
        std::cout << "Kom det n\x86got?" << std::endl;

        return 1;
    }

    // Delete:ar hela objektet från minnet.
    void taBort(Telefonlista *list)
    {
        // Kom ihåg att delete krockar med delete()
        delete list;
    }
};

int main(void)
{
    try
    {

        // Går ej med 0 i början
        // Tolkas som OCTAL och blir fel värde.
        Telefonlista t("076232132", "Nils Pettersson");
        if (!t.skrivUtKontakt())
        {
            

            throw felmeddelandet;
        }
        // Den här tar tid på sig..
        t.taBort(&t);
    }
    // Kastade inte c_str() så varför ska vi plocka upp const char? Märkligt... ELLER?
    // Nu fick jag hela pekarinnehållet trots att det ska ge mig värdet.
    catch (const char *e)
    {
        std::cerr << "Error: " << e << std::endl;
    }
    catch (std::string e)
    {
        std::cerr << "Error: " << e << std::endl;
    }

    return 0;
}
