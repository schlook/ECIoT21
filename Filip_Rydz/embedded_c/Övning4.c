#include <stdio.h>

int main(void)
{
    printf("Skriv in miles per gallon\n");
    double milesPerGallon;
    scanf("%lf", &milesPerGallon);
    
    double literPerMil = 3.785 / milesPerGallon / 1.609 * 10;
    printf("%.2f miles per gallon blir %.2f Liter per mil", milesPerGallon, literPerMil);  
    return 0;
}