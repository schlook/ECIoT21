// Struct "klasslista"
#include <stdio.h>
#include <string.h>

struct Böcker
{
    char titel[50];
    char författare[50];
    char ämne[100];
    int bok_id;
};

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

    // Bok2
    strcpy(Bok2.titel, "Telecom Networks And Management");
    strcpy(Bok2.författare, "NA, R C Jaiswal, Dr P W Wani");
    strcpy(Bok2.ämne, "Telecom");
    Bok2.bok_id = 6495700;

    // Skriv ut bok1
    printf("Bok 1 titel : %s\n", Bok1.titel);
    printf("Bok 1 författare : %s\n", Bok1.författare);
    printf("Bok 1 ämne : %s\n", Bok1.ämne);
    printf("Bok 1 book_id : %d\n", Bok1.bok_id);

    // Skriv ut bok2
    printf("Bok 2 title : %s\n", Bok2.titel);
    printf("Bok 2 författare : %s\n", Bok2.författare);
    printf("Bok 2 ämne : %s\n", Bok2.ämne);
    printf("Bok 2 bok_id : %d\n", Bok2.bok_id);
}
