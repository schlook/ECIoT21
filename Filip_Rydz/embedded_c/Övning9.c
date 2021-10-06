#include <stdio.h>

int main(void)
{
    double pris, ex, mo;
    
    printf("Pris, inkl moms?");
    printf(" ");
    scanf("%lf", &pris);

    int proc;
    printf("Momssats?");
    printf(" ");
    scanf("%d", &proc);
    
    mo = pris * (proc * 0.01);
    ex = pris - mo;

    printf("Priset exkl moms: %.lf\n", ex);
    printf("Momsen uppgår till: %.lf", mo);
    printf("kr");
    return 0;
}