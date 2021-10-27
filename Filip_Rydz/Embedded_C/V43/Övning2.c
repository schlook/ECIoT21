#include <stdio.h>
// inkludera string.h för att använda 'strcasecmp' dvs strängjämförare. 
#include <string.h> // strcasecmp är specifikt för mac ev linux med, strcasecmp är inte skiftlägeskänsligt.

typedef int Num; // typedef = omdefinierar int till Num, för att använda datatyp 'int' skrivs händanefter 'Num'
typedef char Txt; // typedef = omdefinierar char till Txt

Num yearsOld, birthYear; // Num = int, deklarerar två variabler
Txt birthDay[3]; // deklarerar en sträng, på max 3 tecken. Txt = char.
Txt novDec[3];
// deklarerar två funktioner som tar emot argument samt returner värde
Num fylltAr(Num yearsOld);
Num fyllerAr(Num yearsOld);

Num main(void) // main.. Num = int...
{  
    printf("How old are you?\n");
    scanf("%d", &yearsOld);

    printf("Have you had your birthday this year? (Yes/No)\n");
    scanf("%s", birthDay);
    
    // om man fyllt iår körs if  
    // strcasecmp jämför strängar, om britDay = fyllt iår = Yes körs if.   
    if (!strcasecmp(birthDay, "Yes"))
    {
        // första %d hämtar värder från yearsOld, den andra %d hämtar värdet som fuktionen 'fylltAr(yearsOld)' returnerar
        printf("You are %d years old and born %d\n", yearsOld, fylltAr(yearsOld));
    }
    else if (!strcasecmp(birthDay, "No")) // om man hitills inte fyllt år körs else if och funktionen 'fyllerAr(yearsOld)'
    {
        // skriver ut text och anropar funktionen 'fyllerAt(yearsOld)' = ett år äldre än 'fylltAr(..)'
        printf("You are %d years old and born %d\n", yearsOld, fyllerAr(yearsOld));
    }
    else
    {
        // fel inmating vid Yes / No
        printf("Something went wrong..\n");
        fflush(stdin); // flushar ut inmatningar
        fflush(stdout); // och utmatningar, så de inte ligger kvar och stör när main körs igen
        main(); // anropa main igen dvs körs från början. Helst vill man inte anropa main. utan isf göra en egen funktion som är rekursiv
    }
    return 0;
}

Num fylltAr(Num yearsOld) // funktionen som baserar uträkning på att man fyllt iår
{
    // ålder - årets årtal = födelseår
    return birthYear = 2021 - yearsOld;
}

Num fyllerAr(Num yearsOld) // funktionen som baserar uträkning på att man fyller iår
{
    // ålder - (året årtal - 1) = födelseår, -1 för att om man har kvar att fylla är man ett år äldre
    return birthYear = (2021 - 1) - yearsOld;;
}