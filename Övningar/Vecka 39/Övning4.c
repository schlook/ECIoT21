#include <stdio.h>

int main(void)
{
    // Skriver ut till användaren
    printf("Miles per gallon:\n");
    double milesPerGallon;
    // Sparar värdet i vår double milesPerGallon
    scanf("%lf", &milesPerGallon);  

    // Vårt nya värde, tar det som användaren har skrivit in och konverterar
    double literPerMil = 3.785 / milesPerGallon / 1.609 * 10;
    // Skriver ut, exempelvis: 23.00 miles per gallon blir 1.02 liter per mil
    printf("%.2f miles per gallon blir %.2f liter per mil\n", milesPerGallon, literPerMil);

    // Glöm inte denna.
    return 0;
}