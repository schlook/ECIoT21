#include <stdio.h>

#define STORLEK 3 // storleken på matrisen

// funktionerna som ska ta inmatningar från användaren och fylla matrisA och matrisB
void feltA();
void feltB();
// funktionen som ska summera a och b
void sumAB();

// a och b =  multidimensionella fältvariabler (3x3), samt sum som ska summera ihop a och b
int a[STORLEK][STORLEK];
int b[STORLEK][STORLEK];
int sum[STORLEK][STORLEK];

int main(void)
{
    printf("MatrisA: \n");
    feltA(); // funktionen som fyller matris a med användarens inmatning
    printf("MatrisB: \n");
    feltB(); // funktionen som fyller matris b med användarens inmatning
    sumAB();
    return 0;
}
void feltA() // funktionen som med användarens inmatning fyller matrisA[3][3]
{
    // första fältet, rad
    for (int rad = 0; rad < STORLEK; rad++)
    {
        printf("Fyll rad %d med 3 siffor: ", rad + 1);
        // raderna i kolumnerna
        for (int kolumn = 0; kolumn < STORLEK; kolumn++)
        {
            scanf("%d", &a[rad][kolumn]);
        }
    }
    printf("\n");    
}
void feltB() // funktionen som med användarens inmatning fyller matrisB[3][3]
{
    // första fältet, rad
    for (int rad = 0; rad < STORLEK; rad++)
    {
        printf("Fyll rad %d med 3 siffor: ", rad + 1);
        // raderna i kolumnerna
        for (int kolumn = 0; kolumn < STORLEK; kolumn++)
        {   // användaren matar in 3 nummer i våra 3 kolumner
            scanf("%d", &b[rad][kolumn]);
        }
    }
    printf("\n");
}
void sumAB() // summerar raderna med varandra i a och b
{
    for (int rad = 0; rad < STORLEK; rad++)
    {
        for (int kolumn = 0; kolumn < STORLEK; kolumn++)
        {
            sum[rad][kolumn] = a[rad][kolumn] + b[rad][kolumn];
        }
    }
    printf("Summan av a + b:\n"); // skriver ut summan av a + b
    for (int rad = 0; rad < STORLEK; rad++)
    {
        for (int kolumn = 0; kolumn < STORLEK; kolumn++)
        {
            printf("%d ", sum[rad][kolumn]);
        }
        printf("\n");
    }
}