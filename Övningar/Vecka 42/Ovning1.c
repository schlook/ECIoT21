#include <stdio.h>

// Storlek på matrisen
#define STORLEK 3

int main()
{
    // Matris 1
    int a[STORLEK][STORLEK];
    // Matris 2
    int b[STORLEK][STORLEK];
    // Resultat
    int sum[STORLEK][STORLEK];

    /* 
     * Här skall användaren skriva in tal:
     * 1 2 3 
     * 4 5 6 
     * 7 8 9
     */
    printf("Skriv in fält i matris \"a\" (%dx%d): \n", STORLEK, STORLEK);
    // Rad = vilken rad
    for (int rad = 0; rad < STORLEK; rad++)
    {
        // Kol = Kolumn
        for (int kol = 0; kol < STORLEK; kol++)
        {
            // Scanf till adressen
            scanf("%d", &a[rad][kol]);
        }
    }

    /*
     * Här ska användaren skriva in nya tal:
     * 9 8 7
     * 6 5 4
     * 3 2 1
     */
    printf("Skriv in fält i matris \"B\" (%dx%d): \n", STORLEK, STORLEK);
    // Rad = Rad
    for (int rad = 0; rad < STORLEK; rad++)
    {
        // Kol = Kolumn
        for (int kol = 0; kol < STORLEK; kol++)
        {
            scanf("%d", &b[rad][kol]);
        }
    }

    /*
     * Slår ihop det som användaren skrivit in till summa
     * Ingen fråga på denna
     * @rad = rad
     */
    for (int rad = 0; rad < STORLEK; rad++)
    {
        // Kol = Kolumn
        for (int kol = 0; kol < STORLEK; kol++)
        {
            sum[rad][kol] = a[rad][kol] + b[rad][kol];
        }
    }

    /*
     * Utskriften blir från de tal användaren skrivit in (baserat på ovan)
     * 10 10 10
     * 10 10 10
     * 10 10 10
     */
    printf("\nSumma av matriser a+b = \n");
    // Rad = Rad
    for (int rad = 0; rad < STORLEK; rad++)
    {
        // Kol = Kolumn
        for (int kol = 0; kol < STORLEK; kol++)
        {
            printf("%d ", sum[rad][kol]);
        }
        printf("\n");
    }

    return 0;
}