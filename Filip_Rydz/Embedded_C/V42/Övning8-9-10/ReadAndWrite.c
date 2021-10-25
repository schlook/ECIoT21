#include <stdio.h>

int main(void)
{
    // deklarera en sträng, begränsa till 100tecken
    char text[100];
    // deklarera pekare *fp till en FIL
    FILE *fp;
    // öppna eller skapa 'fil.txt' i nuvarande katalog
    // w+ = öppen för läsning och skrivning, finns inte filen så skapas den
    fp = fopen("fil.txt", "w+");

    printf("Skriv en text: ");
    // inmatning till char text[100]
    scanf("%s", text);

    // !fp = fp == NULL. if not fp, do this.. 
    if (!fp)
    {
        printf("Gick inte att öppna filen!\n");
        return 0;
    }
    // skriver över till 'fil.txt'
    fprintf(fp, "%s", text);
    // hämtar från 'fil.txt'
    fscanf(fp, "%s", text);
    // skriver ut texten
    printf("Filen innehåller texten: %s\n", text);
    fclose(fp); // stäng dörra!
    return 0;
}