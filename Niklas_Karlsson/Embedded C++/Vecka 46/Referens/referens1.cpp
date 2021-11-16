#include <iostream>

// Genom värde
void värde1(int i)
{
    i = 2;
}

// Genom referens
void värde2(int &i, int &k)
{
    int tmp;
    tmp = i;
    i = k;
    k = tmp;
}

/// Huvudfunktionen
int main(void)
{
    int k = 0, l = 4, m = 8;

    värde1(k);
    värde2(l, m);

    std::cout << "Värde1: " << k << std::endl
              << "Värde2-l: " << l << std::endl
              << "Värde2-m: " << m << std::endl;
    return 0;
}