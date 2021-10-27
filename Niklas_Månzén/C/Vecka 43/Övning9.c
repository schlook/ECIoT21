#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define ANTAL 5     // definar antalet och max så man kan leka med fler studenter!

typedef struct student{
    char förnamn[50];
    char efternamn[50];
}student;

int main(void)
{

    student klassLista[ANTAL];

    if (ANTAL == 1)         // Blir konstigt formulerat annars!
    {
        printf("\t\tVar v\x84nlig & fyll i Klasslistan p\x86 %d person!\n", ANTAL);
        Sleep(1000);
    }

    else
        printf("\t\tVar v\x84nlig & fyll i Klasslistan p\x86 %d personer!\n", ANTAL);
        Sleep(1000);

    for (int i = 0; i < ANTAL; i++)
    {
        printf("Skriv in %d:a f\x94rnamnet \t\t\t: ",i+1);       // i+1 Så att det inte blir konstigt för användaren.
        scanf("%s",klassLista[i].förnamn);
        Sleep(500);
        printf("Skriv in %d:a efternamnet \t\t: ",i+1);
        scanf("%s",klassLista[i].efternamn);
        Sleep(500);
    }
    
    for (int i = 0; i < ANTAL; i++)
    {
        printf("Student nr : %d heter : %s %s\n", i+1, klassLista[i].förnamn,klassLista[i].efternamn);
        Sleep(500);
    }
    
    return 0;
}