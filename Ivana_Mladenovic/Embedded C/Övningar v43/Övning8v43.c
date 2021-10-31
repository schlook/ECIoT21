#include <stdio.h>
#include <string.h>

struct bok
{
    char titel[50];
    char författare[50];
    char ämne[100];
    int bok_id;
};
//funktioner måste ligga under structen annars får man inte ut informationen
void skrivUtBöcker(struct bok *bok);

int main(void)
{
    //deklarerar structar
    struct bok bok1;
    struct bok bok2;
    //Bok 1
    strcpy(bok1.titel, "C från början");
    strcpy(bok1.författare, "Jan Skansholm");
    strcpy(bok1.ämne, "Programmering");
    bok1.bok_id=1;
    
    //Bok 2
    strcpy(bok2.titel, "C ++ direkt");
    strcpy(bok2.författare, "Jan Skansholm");
    strcpy(bok2.ämne, "Programmering");
    bok2.bok_id=2;
    printf("-----Bokinformation-----\n");
    //skriver ut bok 1
    skrivUtBöcker(&bok1);
    //skriver ut bok 2
    skrivUtBöcker(&bok2);

    return 0;
}

void skrivUtBöcker(struct bok *bok)
{
    printf("Titel: %s\n", bok->titel);
    printf("Författare: %s\n", bok->författare);
    printf("Ämne: %s\n", bok->ämne);
    printf("ID: %d\n", bok->bok_id);
}