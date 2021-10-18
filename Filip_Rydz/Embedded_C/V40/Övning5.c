#include <stdio.h>

// Long long int för att det är YYYYMMDDXXXX eller YYMMDDXXXX
_Bool kontrolleraKon(_Bool kon, long long int pnr);
_Bool kontrolleraKon2(_Bool kon, long long int pnr);

// Void ger ingen return, bra för endast printf() eller arbete som sker i bakgrunden
void printPersonnummer(void);

// Huvudfunktionen
int main(void)
{
    // Måste anropas en gång från main()
    printPersonnummer();
    return 0;
}

// Skriv ut frågorna
void printPersonnummer(void)
{
    // Kön, inte en kossa mu
    int kon;
    // Personnummer.
    long long int nr;
    // Fråga efter könet
    printf("Ange om du är kvinna (0) eller man (1)?: \n");
    // Scanna in det
    scanf("%d", &kon);
    // Nu frågar vi efter det smaskiga!
    printf("Ditt personnummer (utan minus)?\n");
    // long long digit (det vill säga long long int)
    scanf("%lld", &nr);

    // Om vi får en 0:a i return betyder det att det icke stämde.
    if (!kontrolleraKon2(kon, nr))
    {
        fflush(stdin);
        fflush(stdout);
        printf("Det kön du angav matchar inte med personnumret!\nVar god försök igen\n");
        // Rekursion
        printPersonnummer();
    }
    else   
        // Behöver ingen mer kontroll i det här fallet.
        printf("Du angav rätt kön med rätt personnummer!\n");
}

// Kontrollera könet med personnumret.
_Bool kontrolleraKon(_Bool kon, long long int pnr)
{
    // Ta bort sista siffran
    pnr /= 10;

    // Kontrollera 
    if (((kon == 0) && ((pnr % 2) == 0)) || ((kon == 1) && ((pnr % 2) == 1)))
    {
        // Det stämmer
        return 1;
    }

    // Stämmer inte
    return 0;
}

// Om man istället vill korta ner det lite.
// Hur du gör är upp till dig.
_Bool kontrolleraKon2(_Bool kon, long long int pnr)
{
    // Dela med 10 för att få bort sista siffran.
    pnr /= 10;
    // returnera svaret direkt
    return (((kon == 0) && ((pnr % 2) == 0)) || ((kon == 1) && ((pnr % 2) == 1)));
}