#include <iostream>

class Kalkylator
{
public:
    void add(int i, int a);
    void sub(int i, int a);
    void mul(int i, int a);
    void div(int i, int a);
    void mod(int i, int a);
    void meny();
    void d1();
    void d2();

private:
    int a, x, y, resultat;
    char val;
};

void Kalkylator::add(int i, int a)
{
    this->resultat = i + a;
}

void Kalkylator::sub(int i, int a)
{
    this->resultat = i - a;
}

void Kalkylator::mul(int i, int a)
{
    this->resultat = i * a;
}

void Kalkylator::div(int i, int a)
{
    // 0 kan inte delas med nåt..
    if (i == 0)
    {
        std::cerr << "ASSERT FAILED: ";
        std::cerr << " " << __FILE__;
        // Visar inte vart felet ÄR, utan VART det triggas.
        // Kommer säga rad 44
        std::cerr << " " << __LINE__ << std::endl;
        this->resultat = 0;
    }
    else
    {
        this->resultat = i / a;
    }
}

void Kalkylator::mod(int i, int a)
{
    this->resultat = i % a;
}

void Kalkylator::meny()
{
    std::cout << "Var god gör ett val: " << std::endl;
    std::cout << "     1. Addera" << std::endl;
    std::cout << "     2. Subtrahera" << std::endl;
    std::cout << "     3. Multiplicera" << std::endl;
    std::cout << "     4. Dividera" << std::endl;
    std::cout << "     5. Modulus" << std::endl;
}

void Kalkylator::d1()
{
    std::cout << "Ange ditt val: " << std::endl;
    std::cin >> this->a;
    std::cout << "Ange första numret: " << std::endl;
    std::cin >> this->x;
    std::cout << "Ange andra numret: " << std::endl;
    std::cin >> this->y;
    switch (a)
    {
    case 1:
        this->add(x, y);
        break;
    case 2:
        this->sub(x, y);
        break;
    case 3:
        this->mul(x, y);
        break;
    case 4:
        this->div(x, y);
        break;
    case 5:
        this->mod(x, y);
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
        std::cout << "Vill du fortsätta? J/N" << std::endl;
        std::cin >> val;
    } while ((val == 'J') || (val == 'j')); // eller toupper()
}

int main()
{
    Kalkylator kal;
    kal.meny();
    kal.d2();
    return 0;
}