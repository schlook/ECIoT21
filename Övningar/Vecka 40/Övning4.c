#include <stdio.h>

// Deklarera dina funktioner
double arskort(void);
double biljett(void);
int antal(void);

int main(void)
{
    double ar = arskort();
    double bilj = biljett();
    int ant = antal();

    double sum = ant * bilj;

    if (ar < sum)
    {
        printf("Årskortet är billigast\n");
    }
    else
    {
        printf("Enkelbiljetter är billigast\n");
    }
}

// Definiera dina funktioner
double arskort(void)
{
    // 
    double arskort;
    printf("Vad kostar årskortet?\n");
    scanf("%lf", &arskort);

    return arskort;
}

double biljett(void)
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



