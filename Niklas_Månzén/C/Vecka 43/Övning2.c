#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

typedef int NEJ;
typedef char JA;

// Förvirrade mig själv oerhört med vad som var JA och vad som var NEJ...Rekommenderas Ej.

NEJ tjabba(NEJ A,NEJ B)
{
    return A + B;
}

JA hejsan(JA A)
{
    printf("...KUL!\n");
    Sleep(1000);
    return A;
}

NEJ main()
{
    NEJ svar1, svar2 ;
    printf("\tVad vill du addera f\x94r 2 tal?\n");
    scanf("%d\n%d", &svar1, &svar2);
    Sleep(1000);

    printf("Det blev : %d med funktionen 'tjabba'\n",tjabba(svar1,svar2));
    Sleep(1000);
    printf("Because %d + %d = %d!\n",svar1, svar2, svar1+svar2 );

    Sleep(1000);
    getchar();

    JA jasvar ;
    printf("\tVad vill du skriva för bokstav?\n:");
    scanf("%c", &jasvar);
    printf("Det blev '%c' med funktionen 'hejsan'\n",hejsan(jasvar));

    return 0;
}