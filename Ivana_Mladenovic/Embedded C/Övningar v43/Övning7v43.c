#include <stdio.h>
#include <string.h>

struct bok
{
    char titel[50];
    char författare[50];
    char ämne[100];
    int bok_id;
};

int main(void)
{
    struct bok bok1;
    struct bok bok2;
    //Bok 1
    strcpy(bok1.titel, "C från början");
    strcpy(bok1.författare, "Jan Skansholm");
    strcpy(bok1.ämne, "Programmering");
    bok1.bok_id=1;
    printf("-----Bokinformation-----\n");
    printf("BOK 1\n");
    printf("Titel: %s\n", bok1.titel);
    printf("Författare: %s\n", bok1.författare);
    printf("Ämne:: %s\n", bok1.ämne);
    printf("ID: %d\n", bok1.bok_id);
    //Bok 2
    strcpy(bok2.titel, "C ++ direkt");
    strcpy(bok2.författare, "Jan Skansholm");
    strcpy(bok2.ämne, "Programmering");
    bok2.bok_id=2;
    printf("BOK 2\n");
    printf("Titel: %s\n", bok2.titel);
    printf("Författare: %s\n", bok2.författare);
    printf("Ämne:: %s\n", bok2.ämne);
    printf("ID: %d\n", bok2.bok_id);
    return 0;
}
