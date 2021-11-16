#include <iostream>
#include <cstdlib>
#include <math.h>

double potens(double tal_, int potens_ = 2);

int main()
{
    double tal;
    int pot;
    char svar;

    std::cout << "Skriv in ett tal...." << std::endl;
    std::cin >> tal;

    std::cout << "Vill du ange en potens?" << std::endl << "J/N ? " << std::endl;
    std::cin >> svar;

    if (svar == 'j' || svar == 'J')
    {
        std::cout << "Hur mycket?" << std::endl ;
        std::cin >> pot;

        std::cout << potens(tal, pot) << std::endl;
    }
    else if (svar == 'n' || svar == 'N')
    {
        std::cout << potens(tal) << std::endl;
    }
    else
    {
        std::cout << "Tönt." << std::endl ;
    }

    return 0;
}


double potens(double tal_, int potens_) // potens_ har deklererats till 2 som standard.
{
    double svar = std::pow(tal_,potens_);

    return svar;
}