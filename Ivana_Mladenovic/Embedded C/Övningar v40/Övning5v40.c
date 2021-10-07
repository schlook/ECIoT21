#include <stdio.h>
//long long int då personnr är långt
_Bool kontrolleraKon(_Bool kon, long long int pnr);
void printPersonnummer(void);
int main(void)
{
    printPersonnummer();
    return 0;
}
//Funktion till att fråga och ta emot 
void printPersonnummer(void)
{   //kön
    int kon;
    // Personnummer.
    long long int pnr;
    // Frågar efter könet
    printf("Ange om du är kvinna (0) eller man (1)?: \n");
    // Scanna in det
    scanf("%d", &kon);
    // Nu frågar efter pnr!
    printf("Ditt personnummer (utan minus)?\n");
    // long long digit/int
    scanf("%lld", &pnr);

    // Om vi får en 0:a i return betyder det att det icke stämde.
    if (!kontrolleraKon(kon, pnr))
    {
        fflush(stdin);
        fflush(stdout);
        printf("Det kön du angav matchar inte med personnumret!\nVar god försök igen\n");
        // Rekursion
        printPersonnummer();
    }

    //När allt stämmer
    printf("Du angav rätt kön med rätt personnummer!\n");
}
//Funktion till allt kontrollera personnummer
    _Bool kontrolleraKon(_Bool kon, long long int pnr)
{
    // Tar bort sista siffran
    pnr /= 10;

    // Kön kontrolleras med modulus som kollas restvärdet
    if (((kon == 0) && ((pnr % 2) == 0)) || ((kon == 1) && ((pnr % 2) == 1)))
    {
        // Om det stämmer returneras 1
        return 1;
    }    
}
