#include <iostream>

// deklarerar egen 'namespace' innehållande 2 variabler (a, b), döper namnspace'en till 'EC'
namespace EC
{
    int a = 5;
    int b = 8;
};

int main()
{
    // deklarerar två variabler, med samma namn som de i namespacen. dvs 'a' och 'b' men av olika värden
    int a = 10;
    int b = 16;

    // skriver ut Variablerna 'a' och 'b' i main och deras värde
    std::cout << "Variabl a = " << a << std::endl;
    std::cout << "Variabel b = " << b << std::endl;
    // skriver ut variblerna 'a' och 'b' från minRymd. För att kunna anropa dem behövs ange EC::(variabel)
    std::cout << "Variabel a hämtad från minRymd = " << EC::a << std::endl;
    std::cout << "Variabel b hämtad från minRymd = " << EC::b << std::endl;
    return 0;
}