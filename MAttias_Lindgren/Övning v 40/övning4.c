#include <stdio.h>

double årskort (void); 
double enkelbiljett(void) ; 
int antal (void );

int main (void)
{

    double ar = årskort(); 
    double bilj = enkelbiljett();
    int ant = antal(); 


double sum = ant * bilj;

if ( ar < sum)
{
    printf("Årskortet är billigast\n");
}
else 
{
    printf("Enkelbiljett är billigast\n");
}
}
double årskort (void)
{
     double årskort;
    printf("Vad kostar årskortet?\n");
    scanf("%lf", &årskort);

    return årskort;
}

double enkelbiljett(void)
{
    double biljett;
    printf("Vad kostar enkelbiljetten?\n");
    scanf("%lf", &biljett);

    return biljett;
}

int antal(void)
{
    int antal;
    printf("Hur många antal besök planerar ni att göra");
    scanf("%d", &antal);

    return antal;
}