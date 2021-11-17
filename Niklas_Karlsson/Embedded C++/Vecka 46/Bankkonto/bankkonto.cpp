#include <iostream>
#include <cstring>
#include <limits>

class bankkonto
{
public:
    bankkonto(void);
    // const char är en pekare till en const char (samma som char const *)
    // char * const är däremot en konstant pekare till en char
    bankkonto(const char *konto);
    bankkonto(const char *konto, int saldo);
    int insättning(int belopp);
    int uttag(int belopp);
    void kontobesked()
    {
        std::cout << std::endl
                  << "Kontobesked" << std::endl;
        std::cout << "Kontonummer " << this->kontonr << std::endl;
        std::cout << "Saldo " << this->saldo << std::endl;
    }

private:
    int saldo;
    char kontonr[10];
};

int main(void)
{
    bankkonto mittKonto("123456");
    bankkonto statensKonto("789012");
    bankkonto urbansKonto("8812122", 123);

    bankkonto tomtKonto;

    tomtKonto.kontobesked();

    mittKonto.insättning(1000);
    mittKonto.uttag(500);
    mittKonto.kontobesked();

    statensKonto.insättning(750);
    statensKonto.kontobesked();

    int val;

    std::cout << "Ange ett val:" << std::endl
              << "1. Insättning" << std::endl
              << "2. Uttag" << std::endl
              << "3. Avsluta" << std::endl;
    while (1)
    {
        std::cout << "Ange ett val:" << std::endl
                  << "1. Insättning" << std::endl
                  << "2. Uttag" << std::endl
                  << "3. Visa saldot" << std::endl
                  << "4. Avsluta" << std::endl;
        std::cin >> val;
        //
        switch (val)
        {
            double instättning;
            int uttag;
        case 1:
            std::cout << "Ange ett belopp du vill sätta in!" << std::endl;
            std::cin >> instättning;
            mittKonto.insättning(instättning);
            std::cin.clear();
            break;
        case 2:
            std::cout << "Ange ett belopp du vill ta ut, hoppas du har tillräckligt! " << std::endl;
            std::cin >> uttag;
            mittKonto.uttag(uttag);
            std::cin.clear();
            break;
        case 3:
            mittKonto.kontobesked();
            std::cin.clear();
            break;
        case 4:
        default:
            exit(0);
        }
        
        // std::cin.ignore();
    }

    return 0;
}
// När klassen initeras utan argument
bankkonto::bankkonto(void)
{
    strcpy(this->kontonr, "saknas");
    this->saldo = 0;
}

// När vi ininiterar klassen med argument
bankkonto::bankkonto(const char *konto)
{
    strcpy(this->kontonr, konto);
    this->saldo = 0;
}

// När vi ininiterar klassen med flera argument
// char const är för att konvertering ej får ske till 'char *konto'
bankkonto::bankkonto(const char *konto, int saldo)
{
    strcpy(this->kontonr, konto);
    this->saldo = saldo;
}

int bankkonto::insättning(int belopp)
{
    if (belopp > 0)
    {
        this->saldo += belopp;
        return 1;
    }

    // misslyckades
    return 0;
}

int bankkonto::uttag(int belopp)
{
    if ((belopp > 0) && (belopp > this->saldo))
    {
        this->saldo -= belopp;
        return 1;
    }
    // misslyckades
    return 0;
}
