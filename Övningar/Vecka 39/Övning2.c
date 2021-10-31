#include <stdio.h>
// Denna måste vara inkluderad för att kunna få tag i enviromental variabler
// Hämtas i kommandopromten genom att skriva: set
#include <stdlib.h>

int main(void)
{
    // Skriver ut: Min dator heter: (med mellanslag, annnars sätts orden ihop)
    printf("Min dator heter: ");
    // Ingen ny rad utan skriver ut datorns namn efter
    printf("%s", getenv("COMPUTERNAME"));
    // Avslutar med ny rad
    printf("\n");
}