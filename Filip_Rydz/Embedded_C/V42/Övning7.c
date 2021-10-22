#include <stdio.h>
// definiera en max storlek som appliceras på vår fältvariabel felt[]
#define MAX_STRL 100 

int main(void)
{ 
    // deklarera array felt och begränsa till 100 tecken
    char text[MAX_STRL];
    // deklarerar pekare (*p) och pekar till text[]
    char *p = text;
    // initierar reknare till 0, denna kommer räkna tecknen i vår fältvariabel
    int reknare = 0; 

    // ta emot text från inmataren och adressera den till pekaren
    printf("Skriv en text: \n");
    scanf("%s", &(*p));

    // *(p++) Minnesadress - ökar efter att värdet har lästs. Minnesinnehåll - oförändrat. '\0' markerar slutet
    while (*(p++) != '\0') 
    {
        // varje gång while-loopen körs lägger reknare på 1
        reknare++;
    }
    // å ä ö räknas av någon anledning som 2 tecken. ex å = 2 tecken
    printf("Texten '%s' är %d tecken långt\n", text, reknare);
    return 0;
}