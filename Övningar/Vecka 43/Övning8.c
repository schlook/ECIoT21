#include <stdio.h>
#include <string.h>

struct Böcker
{
    char titel[50];
    char författare[50];
    char ämne[100];
    int bok_id;
};
// Kom ihåg att funktionen måste ligga under struct
// Annars ser vet vi inte vad för argument som existerar.
// Kan inte se sådant som ligger under funktionen.
void skrivUtBöcker(struct Böcker *bok);

int main(void)
{
    // Deklarera bok1
    struct Böcker Bok1;
    // Deklarera bok2
    struct Böcker Bok2;

    // Bok 1
    strcpy(Bok1.titel, "C från början");
    strcpy(Bok1.författare, "Jan Skansholm");
    strcpy(Bok1.ämne, "C Programmering Introduktion");
    Bok1.bok_id = 6495407;

    /* book 2 specification */
    strcpy(Bok2.titel, "Telecom Networks And Management");
    strcpy(Bok2.författare, "NA, R C Jaiswal, Dr P W Wani");
    strcpy(Bok2.ämne, "Telecom");
    Bok2.bok_id = 6495700;

    skrivUtBöcker(&Bok1);
    skrivUtBöcker(&Bok2);

    return 0;
}

// Syftet är att visa att det blir kortare med en funktion
// Än att behöva skriva ut informationen (liknande) om och om igen.
void skrivUtBöcker(struct Böcker *bok)
{
    printf("Bok title : %s\n", bok->titel);
    printf("Bok författare : %s\n", bok->författare);
    printf("Bok ämne : %s\n", bok->ämne);
    printf("Bok bok_id : %d\n", bok->bok_id);
    printf("\n"); 
}