#include <iostream>

const double ränta = 13.5;

inline int ränte_beräkning(int summa)
{
    int resultat;

    resultat = summa * (ränta / 100);

    return resultat;
}

int main(void)
{
    int belopp;

    std::cout << "Ange ett belopp: " << std::endl;
    std::cin >> belopp;

    // Funktionsanrop
    std::cout << "Räntan på beloppet blir: " << ränte_beräkning(belopp) << std::endl;

    return 0;
}