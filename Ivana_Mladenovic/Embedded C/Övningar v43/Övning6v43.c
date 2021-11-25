#include <stdio.h>
#include <string.h>

struct lista
{
    //medlemar
    char *förnamn;
    char efternamn[50];
    int ålder;
//struct lista f�r namn minLista
}minLista;

int main()
{
    minLista.förnamn="Ivana";
    //strcpy används för att kopiera en string till en annan och 
    //är smidig när man ska lägga in värden i en fältvariabel
    strcpy(minLista.efternamn, "Mladenovic");
    minLista.ålder=32;
    printf("Mitt namn är %s %s och jag är %d år gammal.", minLista.förnamn, minLista.efternamn, minLista.ålder);
    return 0;
}