#include <stdio.h>
#define BUF 6
void utskrift(void);
float kalkylSumma(float inmatning[]);
float inmatning[6]={};
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
    {
        printf("Ange %d värde(decimaler separeras med punkt '.'): ",i+1 );
        scanf("%f", &inmatning[i]);
    }

}
float kalkylSumma(float inmatnng[])
{
    float summa=0.0;
    for (int i = 0; i < BUF; i++)
    {
        summa +=inmatning[i];
    }
    return summa;
}