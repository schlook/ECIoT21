#include <stdio.h>

#define MAX_LISTA 256
// Listan
void klassLista(void);
// Lägg till klasskompis
void klassAdd(void);
// Visar menyn
void klassMeny(void);

char fornamn[MAX_LISTA][MAX_LISTA];
char efternamn[MAX_LISTA][MAX_LISTA];

int main(void)
{
    // Denna är valfri, visas en gång.
    printf("Hej och välkommen till EC klasslista\n");
    // Startar med att anropa menyn.
    klassMeny();
    return 0;
}

void klassMeny(void)
{
    int val;
    printf("1. Lägg till klasskompis.\n");
    printf("2. Visa klasslistan.\n");
    scanf("%d", &val);

    switch (val)
    {
    case 1:
        klassAdd();
        break;
    case 2:
        klassLista();
        break;
    default:
        printf("Du har angett felaktigt val: %d\n", val);
        fflush(stdin);
        fflush(stdout);
        klassMeny();
        break;
    }
}

void klassLista(void)
{
    // size_t är en typedef för 'unsigned int' lite kortare att skriva :)
    // Får ej krocka med ovanstående variabler
    int fornamnReknare = (sizeof(fornamn) / sizeof(fornamn[0]));
    int efternamnReknare = (sizeof(efternamn) / sizeof(efternamn[0]));

    // Om storleken är noll (FALSE)
    if (!fornamn || !efternamn)
    {
        printf("Det verkar som att du inte har angett någon klasslista");
        // Avbryter allt, får ej ange VÄRDE men går bra att avbryta en
        return;
    }
    else if (fornamnReknare != efternamnReknare)
    {
        // Skriver ut felmeddelandet
        printf("Finns %d förnamn och %d efternamn, vänligen se över detta.", fornamnReknare, efternamnReknare);
        // Avbryter allt, får ej ange VÄRDE men går bra att avbryta en
        return;
    }

    printf("Några av dom som går i min klass heter:\n");
    // Går också bra att kontrollera om i < fornamnReknare eller i < efternamnReknare. (båda ska ha samma värde)
    for (int i = 0; i < fornamnReknare; i++)
    {
        printf("%s", &fornamn[i]);
    }

    for (int j = 0; j < efternamnReknare; j++)
    {
        printf("%s\n", &efternamn[j]);
    }
    
    fflush(stdin);
    fflush(stdout);
    klassMeny();
}

void klassAdd(void)
{
    // Behöver inte vara riktiga namn
    // %s för sträng

    printf("Ange förnamn:\n");
    int storlek;
    storlek = (sizeof(fornamn) / sizeof(fornamn[0]));
    scanf("%s", fornamn[storlek]);

    printf("Ange efternamn:\n");
    storlek = (sizeof(efternamn) / sizeof(efternamn[0]));
    scanf("%s", efternamn[storlek]);

    fflush(stdin);
    fflush(stdout);
    klassMeny();
}