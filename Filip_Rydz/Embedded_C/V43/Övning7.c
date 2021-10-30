#include <stdio.h>
#include <string.h> // inkluderas för att vi vill använda 'strcpy' då strcpy funkar bra på fältvariabler

struct Böcker // skapar vår struktur (struct) med fyra medlemmar
{
    char titel[50];
    char författare[80];
    char ämne[100];
    long bok_id; // long int.. 
};
int main(void)
{
    struct Böcker Bok1; // deklarerar 1a struct av typen Böcker
    struct Böcker Bok2; // deklarerar 2a struct av typen Böcker, vi har alltså 2 strukturer av typen Böcker

    strcpy(Bok1.titel, "Mastery"); // tilteln tilldelas med hjälp av 'strcpy' osv
    strcpy(Bok1.författare, "Robert Greene");
    strcpy(Bok1.ämne, "Management");
    Bok1.bok_id = 9781781250914;

    strcpy(Bok2.titel, "Atomic Habits");
    strcpy(Bok2.författare, "James Clear");
    strcpy(Bok2.ämne, "Personlig utveckling");
    Bok2.bok_id = 9781847941831;

    // här skriver vi ut våra strukturer och dess innehåll. Tab för att få en mer estetisk look.
    printf("\tBoktitel:\t\tFörfattare:\t\tÄmne:\t\t\tBok ID:\n");
    printf("Bok 1:  %s\t\t\t%s\t\t%s\t\t%ld\n", 
        Bok1.titel, Bok1.författare, Bok1.ämne, Bok1.bok_id);
    printf("Bok 2:  %s\t\t%s\t\t%s\t%ld\n", 
        Bok2.titel, Bok2.författare, Bok2.ämne, Bok2.bok_id);
    return 0;
}