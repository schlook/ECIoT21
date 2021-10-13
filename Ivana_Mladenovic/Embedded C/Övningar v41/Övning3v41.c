#include <stdio.h>
float kalkyleraSumma(float nummer[]);
int main(void)
{
    float nummer[]={3.5, 45, -8, 22.4, 6.9};
    float resultat;
    resultat=kalkyleraSumma(nummer);
    return 0;
}
float kalkyleraSumma(float nummer[])
{
    float summa=0.0;
    for (int i = 0; i < 6; i++)
    {
        summa +=nummer[i];
    }
    printf("Resultat är: %f",summa);
    printf("=%.2f",summa);
}