#include <stdio.h>
#include <string.h> // inkluderar denna därför att vi kommer använda 'strcpy'..

struct lista // skapa vår struct, struktur namn = lista. Innehåller 3 medlemmar. 
{
    char *fornamn; // pekare? idontknow... :S
    char efternamn[50]; // fältvariabel, max 50 tecken
    int alder;
};
int main(void)
{   
    // deklarerar variabeln namnlista
    struct lista namnlista; 
    // här tilldelas första medlemmen (fornamn) 'Jane' i struktur variablen 'namnlista' i typen lista
    namnlista.fornamn = "Jane"; 
    // eftersom vi har en fältvariabeln tilldelar vi den enklast med 'strcpy' som ingår i <string.h>
    strcpy(namnlista.efternamn, "Doe");
    namnlista.alder = 30;

    // skriver ut..
    printf("%s %s är %d år gammal\n", 
    namnlista.fornamn, namnlista.efternamn, namnlista.alder);

    return 0;
}