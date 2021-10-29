#include <stdio.h>

// Deklarera funktionen minFunktion med inga argument.
double minFunktion(void);

int main(void)
{
    // Skriver ut double värdet
    // Tillåt inte mer än 2 decimaler.
    printf("minFunktion() = %.2lf", minFunktion());
    // Skickar värdet till operativsystemet
    return 0;
}

// Definieringen av funktionen "minFunktion"
double minFunktion(void)
{
    double a, b;
    // Sätter variabel a till 32.2
    a = 33.2;
    // och b till 22.3
    b = 22.3;

    // Returnera värdet av a * b
    return a * b;
}