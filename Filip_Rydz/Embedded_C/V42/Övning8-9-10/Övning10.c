#include <stdio.h>

int main(void)
{
    // deklarera sträng, max 100tecken
    char text[100];
    // deklarera pekare som pekar mot FIL
    FILE *fp;
    // öppna 'fil.txt', r = READ only
    fp = fopen("fil.txt", "r");

    if (!fp) // om inte fp så körs if, (vid fel)
    {
        printf("Något gick fel, se över din fil...\n");
        return 0;
    }
    // hämta innehållet från fp
    fscanf(fp, "%s", text);
    // skriv ut texten + innehåll (text)
    printf("Filen innehåller texten: %s\n", text);
    // stäng (r) READ only 
    fclose(fp);

    // deklarera ny sträng, denna kommer skriva över befintlig
    char nyText[100];
    // öppna 'fil.txt' denna gången i WRTIE läge, dvs att vi kan skriva över innehållet
    fp = fopen("fil.txt", "w");
    
    printf("Skriv in en ny text: ");
    // ny sträng från imatning
    scanf("%s", nyText);
    // skriv över nyText i 'fil.text'
    fprintf(fp, "%s", nyText);

    // hämta (nya) innehållet från 'fil.txt'
    fscanf(fp, "%s", nyText);
    // skriv ut .... + nyText
    printf("Filen innehåller nu texten: %s\n", nyText);
    fclose(fp); // och stäng filen

    return 0;
}