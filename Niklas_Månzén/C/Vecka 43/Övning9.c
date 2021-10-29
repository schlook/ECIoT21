#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define ANTAL 5                                 // definar antalet så man kan leka med fler studenter!

typedef struct student{
    char förnamn[50];
    char efternamn[50];
}student;

int main(void)
{

    student klassLista[ANTAL];

    if (ANTAL == 0)                             // Fångar 0. För antalet studenter Går icket!
    {
        Sleep(1000);
        printf("\t\tDu har angivit %d antal studenter att fylla i... Var god f\x94rs\x94k igen!\n", ANTAL);
        Sleep(1000);

        return 0;
    }

    else if (ANTAL == 1)                        // Fångar 1. Blir konstigt formulerat annars!
    {
        printf("\t\tVar v\x84nlig & fyll i Klasslistan p\x86 %d person!\n", ANTAL);
        Sleep(1000);

        printf("Skriv in f\x94rnamnet \t\t\t: "); 
        scanf("%s",klassLista[ANTAL].förnamn);
        Sleep(500);
        printf("Skriv in efternamnet \t\t\t: ");
        scanf("%s",klassLista[ANTAL].efternamn);
        

        Sleep(1000);
        printf("Studenten du la till heter \t\t: %s %s\n", klassLista[ANTAL].förnamn,klassLista[ANTAL].efternamn);
        Sleep(500);

    }
    
    else                                          // är ANTAL >1 så loopar vi igenom namn & efternamn. Ett i taget.
    {
        printf("\t\tVar v\x84nlig & fyll i Klasslistan p\x86 %d personer!\n", ANTAL);
        Sleep(1000);

        for (int i = 0; i < ANTAL; i++)
        {
        printf("Skriv in %d:a f\x94rnamnet \t\t\t: ",i+1);       // i+1 Så att det inte ser konstigt ut för användaren.
        scanf("%s",klassLista[i].förnamn);
        Sleep(500);
        printf("Skriv in %d:a efternamnet \t\t: ",i+1);
        scanf("%s",klassLista[i].efternamn);
        Sleep(500);
        }
    
        for (int i = 0; i < ANTAL; i++)
        {
        Sleep(500);
        printf("Student nr : %d heter : %s %s\n", i+1, klassLista[i].förnamn,klassLista[i].efternamn);
        Sleep(500);
        }
    }

    Sleep(500);
    printf("\t\tTack s\x86 mycket f\x94r att du fyllde i klasslistan!\n");
    Sleep(500);
    
    return 0;
}