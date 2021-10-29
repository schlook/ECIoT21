#include <stdio.h>

int main(void)
{
    // deklarera en sträng, begränsa till 100tecken
    char text[100];
    // deklarera pekare *fp till en fil
    FILE *fp;
    // öppnar filen 'fil.txt', sökväg: nuvarande katalog
    // om inte filen finns skapas den genom w (w = öppen för skrivning)
    fp = fopen("fil.txt", "w");
    // om problem med att öppna filen körs if..
    if (fp == NULL)
    {
        printf("Kunde inte läsa filen!\n");
        return 0;
    }
    // ta emot inmatning
    printf("Skriv en text: ");
    scanf("%s", text);
    // fprintf skriver över till vår öppnade fil 'fil.txt'
    fprintf(fp, "%s", text);
    // stänger filen, MUCH IMPORTANTE!
    fclose(fp);
    return 0;
}