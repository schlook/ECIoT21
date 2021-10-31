#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Filpekare
    FILE *fp;
    char text[256];

    // Sökvängen till filen (nuvaranade katalog)
    // Öppnar och skapar filen.
    fp = fopen("ovning.txt", "w");
    printf("Skriv in text:\n");
    scanf("%s", text);

    // om filpekaren inte finns
    if (!fp)
    {
        // Skriv ut meddelande
        printf("Det gick inte att öppna filen");
        // Samma som exit
        return 0;
    }

    // Argument 1: variabeln
    // Argument 2: Storlek på datatypen
    // Argument 3: Storlek på variabeln
    // Argument 4: Filpekaren
    fprintf(fp, "%s", text);

    fclose(fp);
}