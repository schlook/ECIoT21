#include <iostream>
#include <cstring>

class sträng
{
    public:
        int i;
        // Konstruktor, med pekare för att visa..
        sträng(char const *init);
        ~sträng(void);
        void printSträng(void);

    private:
        char *st;
};

sträng::sträng(char const *init)
{
    this->st = new char[strlen(init) + 1];
    // Kopierar strängen från init till st
    strcpy(this->st, init);
}

void sträng::printSträng(void)
{
    std::cout << this->st << std::endl;
}

sträng::~sträng(void)
{
    // Frigör minnet dit pekaren pekar.
    delete this->st;
}

int main(void)
{
    sträng nySträng("Hejsan hoppsan svejsan");

    nySträng.printSträng();

    return 0;
}