#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

#define RAD 3
#define KOLUMN 3

int matrisA[RAD][KOLUMN];
int matrisB[RAD][KOLUMN];
int sum[RAD][KOLUMN];

/*Fick hjälp av en vän som jobbar med programmering. Dock inte i C. Men i C++ & annat...Tog oss kanske 2h. 
Istället för att användaren skriver i main i 2 olika kodblock etc,som i facit, kändes det snyggare och mer effektiv med en Generell Matrisskaparfunktion. 
Vi har också definerat 2 värden RAD = 3 och KOLUMN = 3. Så man kan ha olika storlekar på Matriserna...*/

void matris(int (*genMatris)[KOLUMN])// Här blir det avancerat...Vi googlade. Tycker att argumentet är shady. Min vän sa också att 30% av yrket går åt att Googla. 
{
    for (int rad = 0; rad < RAD; rad++)
    {      
        for (int kolumn = 0; kolumn < KOLUMN; kolumn++)
        {
            printf("%d a v\x84rdet : ", (rad*KOLUMN)+kolumn+1);
            scanf("%d", &genMatris[rad][kolumn]);            
        }   
    }
}

int main ()

{
    
    printf("Skriv in 9 Olika v\x84rden till den f\x94rsta Matrisen\n");
    matris(matrisA);

    printf("Skriv in 9 Olika v\x84rden till den andra Matrisen\n");
    matris(matrisB);

    printf("Summan av Matriser :\n");
    
    for (int rad = 0; rad < RAD; rad++)
    {
        
        for (int kol = 0; kol < KOLUMN; kol++)
        {
            sum[rad][kol] = matrisA[rad][kol] + matrisB[rad][kol];
            printf("%d  ", sum[rad][kol]);
        }
        printf("\n");
    }
    
    return 0;
}