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

void minUtskrift(struct bokInformation *genBok)
{ 
    printf("Bok NR 1 heter : %s\nF\x94rfattare : %s\n\x8Emne : %s\nBOK ID : %d\n", genBok->titel, genBok->författare, genBok->ämne, genBok->bok_id );   
}

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

    Sleep(1000);
    minUtskrift(&bok1);
    Sleep(1000);
    minUtskrift(&bok2);

    return 0;
}