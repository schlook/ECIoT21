#include <stdio.h>
//deklarerar funktioner
double årsKort(void);
double enkelBiljett(void);
int antalBesök(void);

//main börjar
int main(void)
{
    double a=årsKort();
    double e=enkelBiljett();
    int b=antalBesök();
    double summa=e*b;
    if(summa<a)
    {
        printf("Enkelbiljett är billigast!");
    }
    else
    printf("Årsskortet är billigast!");

    return 0;
}
//Funktioner
double årsKort(void)
{
    double års;
    printf("Vad är priset på ett årskort?");
    scanf("%lf", &års);
}
double enkelBiljett(void)
{
    double enkel;
    printf("Vad är priset på en enkelbiljett?");
    scanf("%lf", &enkel);
}
int antalBesök(void)
{
    int besök;
    printf("Hur många besök till tivolit ska göras totalt?");
    scanf("%d", &besök);
}
