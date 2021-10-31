#include <stdio.h> 
#include <stdlib.h>
// första typdefineringen
typedef long long int lli ;

lli minFunktion(lli variabelnamn);
// andra typdefineringen
typedef int Byte; 
Byte addera(Byte tal1,Byte tal2); 



Byte main (void)
{   // nya typdefinering 
    Byte sju = 7; 
    int fem =  5; 
    // utan funktion
    printf("%d + %d = %d\n", sju, fem ,sju + fem );
    // anropar funktionen
    printf("ditt angivna personummer utan fyra sista: %lld\n\n", minFunktion(20001019));

    return 0;
} 
// funktionen 
long long int minFunktion(long long int variabelnamn)
{
    return variabelnamn; 
}
// retuturnerar int 
Byte addera(Byte tal1 , Byte tal2)
{
    return tal1 + tal2;
}
