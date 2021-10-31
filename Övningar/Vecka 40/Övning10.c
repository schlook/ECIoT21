#include <stdio.h>

int main(void)
{
    int rader;
    printf("Skriv in antal rader: \n");

    scanf("%d", &rader);
    // Första loopen, kommer räkna från 1 till 10
    for (int i = 1; i <= rader; i++)
    {
        // Eftersom denna for befinner sig i föregående for-loop kan man anropa variabeln i
        // Denna kommer att räkna från 1 till det nummer som i befinner sig på
        // om i är 1, skrivs en enkel 1:a ut
        // om i är 2, skrivs 1 och 2.. och så vidare
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        // Bryt första loopen med 
        printf("\n");
    }
}