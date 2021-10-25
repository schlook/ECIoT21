#include <stdio.h>

int main(void)
{
    char text[100];
    FILE *fp;
    // öppna filen 'fil.txt', dock endast 'r', dvs Read only
    // om 'fil.txt' inte finns returneras 0 och if (fp == NULL) körs
    fp = fopen("fil.txt", "r");

    // om filen inte går att läsa eller saknas..
    if (fp == NULL)
    {
        printf("Kunde inte läsa filen!\n");
        return 0;
    }
    // scannar in eller hämtar pekare *fp, sträng, och char 'text' 
    fscanf(fp, "%s", text);
    // skriver ut innehållet
    printf("Filen innehåller texten: %s\n", text);
    // stäng efter dig
    fclose(fp);
    return 0;
}