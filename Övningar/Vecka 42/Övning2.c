#include <stdio.h>

void klassKompisar(void);

int main(void)
{
    klassKompisar();
    return 0;
}

void klassKompisar(void)
{
    // Behöver inte vara riktiga namn
    // Testa lägg till fler förnamn än efternamn och se vad som händer
    char fornamn[][256] = {"Alf", "Jonas", "Jesper", "Kalle", "Hobbe"};
    char efternamn[][256] = {"Holgersson", "Persson", "Andersson", "Åkesson", "Jansson"};

    // size_t är en typedef för 'unsigned int' lite kortare att skriva :)
    // Får ej krocka med ovanstående variabler
    size_t fornamnReknare = (sizeof(fornamn) / sizeof(fornamn[0]));
    size_t efternamnReknare = (sizeof(efternamn) / sizeof(efternamn[0]));
    size_t totStorlek;

    // Om förnamn inte är lika stor som efternamn
    if (fornamnReknare != efternamnReknare)
    {
        // Skriver ut felmeddelandet
        printf("Finns %d förnamn och %d efternamn, vänligen se över detta.", fornamnReknare, efternamnReknare);
        // Avbryter allt, får ej ange VÄRDE men går bra att avbryta en
        return;
    }
    else
    {
        // Om förnamn och efternamn är lika stora så spelar det ingen roll vad vi jämför med.
        totStorlek = fornamnReknare;
    }

    printf("Några av dom som går i min klass heter:\n");
    // Går också bra att kontrollera om i < fornamnReknare eller i < efternamnReknare. (båda ska ha samma värde)
    for (int i = 0; i < totStorlek; i++)
    {
        printf("%s %s\n", fornamn[i], efternamn[i]);
    }
}