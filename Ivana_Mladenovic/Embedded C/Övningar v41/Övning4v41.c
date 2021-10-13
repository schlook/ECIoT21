#include <stdio.h>
#define BUF 6
void utskrift(void);
float kalkylSumma(float inmatning[]);
//arrayen får en storlek som är lika med BUF
float inmatning[BUF]={};
int main(void)
{
    utskrift();
    float resultat;
    resultat=kalkylSumma(inmatning);
    printf("Resultat: %.2f",resultat);
    return 0;
}
void utskrift(void)
{
    for (int i = 0; i < BUF; i++)
    {   //i+1 öka indexet med 1 för att lägga inmatningen en efter en i följd 1-6
        printf("Ange %d värde(decimaler separeras med punkt '.'): ",i+1 );
        scanf("%f", &inmatning[i]);
    }

}
float kalkylSumma(float inmatnng[])
{   //summa får värde 0 för att vara på dn säkra sidan 
    //att den inte ska innehålla något kvar från förra inmatningen
    float summa=0.0;
    for (int i = 0; i < BUF; i++)
    {
        summa +=inmatning[i];
    }
    return summa;
}