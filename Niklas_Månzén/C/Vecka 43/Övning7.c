#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

 struct bokInformation{
    char titel[50];
    char författare[50];
    char ämne[100];
    int bok_id;
};

int main(void)
{
    struct bokInformation bok1, bok2;
    
    strcpy(bok1.titel, "Sagan Om Ringen");
    strcpy(bok1.författare, "J.R Tolkien");
    strcpy(bok1.ämne, "FANTASY");
    bok1.bok_id = 1337;

    strcpy(bok2.titel, "Harry Potter & The Order Of The Phoenix");
    strcpy(bok2.författare, "J.K Rowlings");
    strcpy(bok2.ämne, "MAGIC");
    bok2.bok_id = 1336;

    printf("Bok NR 1 heter : %s\nF\x94rfattare : %s\n\x8Emne : %s\nBOK ID : %d\n", bok1.titel, bok1.författare, bok1.ämne, bok1.bok_id );
    Sleep(1000);
    printf("Bok NR 2 heter : %s\nF\x94rfattare : %s\n\x8Emne : %s\nBOK ID : %d\n", bok2.titel, bok2.författare, bok2.ämne, bok2.bok_id );

    return 0;
}