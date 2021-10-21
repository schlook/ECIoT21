#include <stdio.h>
// Max storlek för sträng
#define MAX_STORLEK 100

int main()
{
    // Deklarerar en sträng med storleken från MAX_STORLEK
    char text[MAX_STORLEK];
    // Deklarerar pekare som pekar till text
    char *str = text;
    // räknare
    int reknare = 0;

    // inmatning från användaren.
    printf("Skriv in text: ");
    scanf("%s", &text);

    // Iterera till sista fältet av strängen
    while (*(str++) != '\0')
    {
        reknare++;
    }

    // Skriver ut längden av strängen med hjälp av räknaren
    printf("Längd av '%s' = %d", text, reknare);

    return 0;
}