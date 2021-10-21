#include <stdio.h>

void klassLista(); // funktionen innehållande för- och efternamn samt räknare och utskrivare

int main(void)
{
    klassLista(); // anropa funktion
    return 0;
}

void klassLista(void)
{
    // fält med förnamn, satt till max 256tecken
    char fornamn[][256] = {"I.P.", "Homer", "Seymoure", "Haywood U.", "Olaf Maifrend"};
    // fält med efternamn, satt till max 256tecken
    char efternamn[][256] = {"Freely", "Sexual", "Butz", "Cuddleme", "Sergel"};
    // Räknare av antalet för- och efternamn 
    size_t fornamnReknare = (sizeof(fornamn) / sizeof(fornamn[0]));
    size_t efternamnReknare = (sizeof(efternamn) / sizeof(efternamn[0]));

    // om antalet inte stämmer (!=) körs if.
    if (fornamnReknare != efternamnReknare)
    {
        printf("Det är %zu förnamn och %zu efternamn.\nAntalet namn stämmer inte överens..\nGör ett nytt försök!\n", fornamnReknare, efternamnReknare);        
    }
    else // annars går på else
    {
        printf("I klassen går:\n");
        for (int i = 0; i < fornamnReknare; i++) // iom att för- och efternamn är stämmer kvittar det att vi jämför med fornamnReknare eller efternamnReknare, då de är lika
        {
            printf("%s %s\n", fornamn[i], efternamn[i]);
        }
    }    
}