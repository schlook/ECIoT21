#include <iostream>

class Kalkylator
{
public:
    void math(int i, int a, char b);
    void meny();
    void d1();
    void d2();

private:
    int x, y, resultat;
    char val, a;
    void resultatet(void);

    enum teckenVärde
    {
        NAMN,
        NUMMER,
        SLUT,
        PLUS = '+',
        MINUS = '-',
        MULTI = '*',
        DIVI = '/',
        MODUL = '%'
    };
};

void Kalkylator::math(int i, int a, char b)
{
    if ((b == DIVI) && (i == 0))
    {
        std::cerr << "Kan inte dela något med 0! ";
        std::cerr << __FILE__;
        // Visar inte vart felet ÄR, utan VART det triggas.
        // Kommer säga rad 54
        std::cerr << " " << __LINE__;
        this->resultat = 0;
    }
    else if (b == PLUS)
    {
        this->resultat = i + a;
    }
    else if (b == DIVI)
    {
        this->resultat = i / a;
    }
    else if (b == MULTI)
    {
        this->resultat = i * a;
    }
    else if (b == MINUS)
    {
        this->resultat = i - a;
    }
    else if (b == MODUL)
    {
        this->resultat = i % a;
    }
    else
    {
        this->resultat = 0;
    }
}

void Kalkylator::meny()
{
    std::cout << "Var god gör ett val: " << std::endl;
    std::cout << "     +. Addera" << std::endl;
    std::cout << "     -. Subtrahera" << std::endl;
    std::cout << "     *. Multiplicera" << std::endl;
    std::cout << "     /. Dividera" << std::endl;
    std::cout << "     %. Modulus" << std::endl;
}

void Kalkylator::d1()
{
    std::cout << "Ange första numret: " << std::endl;
    std::cin >> this->x;
    std::cout << "Ange tecken: " << std::endl;
    std::cin >> this->a;
    std::cout << "Ange andra numret: " << std::endl;
    std::cin >> this->y;

    switch (a)
    {
    case PLUS:
        this->math(x, y, PLUS);
        break;
    case MINUS:
        this->math(x, y, MINUS);
        break;
    case MULTI:
        this->math(x, y, MULTI);
        break;
    case DIVI:
        this->math(x, y, DIVI);
        break;
    case MODUL:
        this->math(x, y, MODUL);
        break;
    default:
        std::cout << "Ogiltigt val, försök igen! " << std::endl;
    }
}

void Kalkylator::d2()
{
    do
    {
        d1();
        this->resultatet();
        std::cout << "Vill du fortsätta? J/N" << std::endl;
        std::cin >> val;
    } while ((val == 'J') || (val == 'j')); // eller toupper()
}

void Kalkylator::resultatet(void)
{
    std::cout << "Resultatet är: " << this->resultat << std::endl;
}

int main()
{
    Kalkylator kal;
    kal.meny();
    kal.d2();
    return 0;
}