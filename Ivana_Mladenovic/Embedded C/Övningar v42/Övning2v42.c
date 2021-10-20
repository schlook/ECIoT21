#include <stdio.h>
void klassLista(void);
int main(void)
{
    klassLista();
    return 0;
}
void klassLista(void)
{
    char f_namn[][256]={"Ivana", "Elin", "William"};
    char e_namn[][256]={"Mladenovic", "Sundbom", "Hagelin"};
    size_t freknare=(sizeof(f_namn)/sizeof(f_namn[0]));
    size_t ereknare=(sizeof(e_namn)/sizeof(e_namn[0]));
    size_t total;
    if (freknare != ereknare)
    {
        printf("Antal förnamn och efternamn är inte lika!");
        printf("Det finns %d förnamn och %d efternamn i listan!", freknare, ereknare);
    }
    else
    {
        total=freknare;
    }
    printf("I klasslistan finns: \n");
    for (size_t i = 0; i < total ; i++)
    {
        printf("\n%s %s\n", f_namn[i], e_namn[i]);
    }
    
    
}