#include <stdio.h>
void klassLista(void);
int main(void)
{
    klassLista();
    return 0;
}
void klassLista(void)
{
    char f_namn[][256]={"Ivana", "Elin", "William", "John"};
    char e_namn[][256]={"Mladenovic", "Sundbom", "Hagelin"};
    //kollar hur många element det finns i första fältet 'a'
    //resultatet sparas i variabeln freknare
    size_t freknare=(sizeof(f_namn)/sizeof(f_namn[0]));
    //kollar hur många element det finns i fältet 'b'
    size_t ereknare=(sizeof(e_namn)/sizeof(e_namn[0]));
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
        printf("\n%s %s\n", f_namn[i], e_namn[i]);
    }
    
    
}