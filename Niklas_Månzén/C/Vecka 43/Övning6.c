#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define MAX 50

typedef struct
{
    char *fornamn;
    char efternamn[MAX];
    int ålder;
}namelist;                                          //typedefade min struct. Smidigare att använda den senare i programmet!

int main(void)
{
    namelist firstPerson ;

    firstPerson.fornamn = "Jonas";                  // Först på ett manuellt(?) sätt...
    strcpy (firstPerson.efternamn, "Slaskesson");
    firstPerson.ålder = 99; 
    
    printf("First person is: \t%s %s \nAnd that person is:\t%d years old...\n", firstPerson.fornamn, firstPerson.efternamn, firstPerson.ålder);

    Sleep(1000);
    namelist secondPerson = {"Mosse", "M\x86nzen", 30};  // Testade sen på "vanliga" sättet...Mycket smidigare ^^

    printf("Second person is: \t%s %s \nAnd that person is:\t%d years old...\n", secondPerson.fornamn, secondPerson.efternamn, secondPerson.ålder);
    
    return 0;
}