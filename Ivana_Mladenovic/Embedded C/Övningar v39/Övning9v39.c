#include <stdio.h>
int main(void)
{
    // Sätt variabler, pris, exkl moms
    double pris, ex, mo;
    // Procent i heltal
    int proc;

    // Fråga användaren om priset inkl. moms.
    printf("Pris (inkl. moms):\n");
    scanf("%lf", &pris);
    // Efterfrågan momssatsen i procent
    printf("Momssats:\n");
    scanf("%d", &proc);

    // Set 
    // 0.01 * heltal gör om det till decimaltal.
    // 25 blir 0.25
    // +1 = 1.25
    ex = pris / (1 + 0.01 * proc);
    mo = pris - ex;

    // Skriv ut till användaren vad priset exkl momsen är på
    // Och vad momsen är (i kronor)
    printf("Pris exkl moms: %7.2f\n", ex);
    printf("Moms: %7.2f\n", mo);
    return 0;
}