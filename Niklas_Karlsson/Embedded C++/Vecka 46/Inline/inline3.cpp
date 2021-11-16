#include <iostream>

class operation
{
    int a, b, add, sub, mul;
    float div;

public:
    void hämta();
    void sum();
    void skillnad();
    void produkt();
    void division();
};

inline void operation::hämta()
{
    std::cout << "Ange första värde: ";
    std::cin >> a;
    std::cout << "Ange andra värde: ";
    std::cin >> b;
}

inline void operation::sum()
{
    this->add = a + b;
    std::cout << "Addition av två tal: " << a + b << std::endl;
}

inline void operation::skillnad()
{
    this->sub = a - b;
    std::cout << "Skillnad mellan två tal: " << a - b << std::endl;
}

inline void operation::produkt()
{
    this->mul = a * b;
    std::cout << "Produkt av två tal: " << a * b << std::endl;
}

inline void operation ::division()
{
    this->div = a / b;
    std::cout << "Division mellan två tal: " << a / b << std::endl;
}

int main()
{
    std::cout << "Program som använder inline: " << std::endl;
    operation op;
    op.hämta();
    op.sum();
    op.skillnad();
    op.produkt();
    op.division();
    return 0;
}