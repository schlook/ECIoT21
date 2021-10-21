#include <stdio.h>
#define BUF 256
int meny(void);
void inmatning();
void utskrift();

char fornamn[BUF][BUF];
char efternamn[BUF][BUF];

int main(void)
{
    meny();
    return 0;
}
int meny(void)
{
    int val;
    printf("Ange ett val:\n");
    printf("1. Lägg till klasskompis\n");
    printf("2. Visa klasslistan\n");
    scanf("%d", &val);
    switch (val)
        {
        case 1:
            inmatning();
            break;
        case 2:
            utskrift();
            break;
        default:
            printf("Du har angett fel val. Vänligen försök igen.");
            fflush(stdin);
            fflush(stdout);
            meny();
            break;
        }
}
void inmatning()
{ 
    printf("Ange förnamn:\n");
    int i=0;
    if(fornamn[i] <= BUF) 
    {
        scanf("%s", &fornamn[i][BUF]);
        i++;
    }
    printf("Ange efterrnamn:\n");
    if(efternamn[i] <= BUF)
    {
        scanf("%s", &efternamn[i][BUF]);
        i++;
    }
    
    fflush(stdin);
    fflush(stdout);
    meny();

}
void utskrift()
{
    //kollar hur många element det finns i första fältet 'a'
    //resultatet sparas i variabeln freknare
    size_t freknare =(sizeof(fornamn)/sizeof(fornamn[0]));
    //kollar hur många element det finns i fältet 'b'
    size_t ereknare =(sizeof(efternamn)/sizeof(efternamn[0]));
    size_t total;
    //om antal element i v.freknare är olika av antal element i v.ereknare
    if (freknare != ereknare)
    {
        //felmeddelande
        printf("Antal förnamn och efternamn är inte lika!\n");
        //skriver hur många antal element finns i respektive fält
        printf("Det finns %d förnamn och %d efternamn i listan!", freknare, ereknare);
        return;
    }
    else
    {
        //variabel total får ett värde av antingen freknare eller ereknare då
        //de är lika stora, sedan används total i for-loopen nedan för utskrift
        total=freknare;
    }
    //skriver ut hela listan via for-loopen
    printf("I klasslistan finns: \n");
    for (size_t i = 0; i < total ; i++)
    {
        printf("%s %s\n", fornamn[i], efternamn[i]);
    }
    fflush(stdin);
    fflush(stdout);
    meny();
}