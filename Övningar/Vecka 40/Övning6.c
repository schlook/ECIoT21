#include <stdio.h>

int main(void)
{
    // Val av datatypen Heltal.
    int val;
    printf("Skriv in ditt val: \n");
    // scanf, scannar siffra/heltal
    // tilldelar värdet av variabel var's adress
    scanf("%d", &val);

    // Kan endast kontrollera EN variabel
    switch (val)
    {
        case 1:
            printf("Du har angett val 1.\n");
            break;
        // Letar efter siffran 2
        case 2:
            printf("Du har angett val 2.\n");
            break;
        // Letar efter siffran 3
        case 3:
        // Letar efter siffran 4, ingen break så kommer gå vidare till nästa case
        case 4:
            printf("Val 3 och 4 är samma.\n");
            break;
        // Default, ungefär som else.
        default:
            printf("Du har angett fel val: %d är inte ett giltigt val", val);
            break;
    }
    return 0;
}