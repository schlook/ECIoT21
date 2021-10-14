#include <stdio.h>
#define BUF 6
void utskrift(void);
float kalkylSumma(float inmatning[]);
//arrayen f†r en storlek som „r lika med BUF
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
    {   //i+1 ”ka indexet med 1 f”r att l„gga inmatningen en efter en i f”ljd 1-6
        printf("Ange %d v„rde(decimaler separeras med punkt '.'): ",i+1 );
        scanf("%f", &inmatning[i]);
    }

}
float kalkylSumma(float inmatnng[])
{   //summa f†r v„rde 0 f”r att vara p† dn s„kra sidan 
    //att den inte ska inneh†lla n†got kvar fr†n f”rra inmatningen
    float summa=0.0;
    for (int i = 0; i < BUF; i++)
    {
        summa +=inmatning[i];
    }
    return summa;
}