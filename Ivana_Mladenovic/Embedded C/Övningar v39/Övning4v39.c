#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    double m;
    printf("Skriv in miles per gallon: ");
    scanf("%lf", &m);
    double l= 3.785/m/1.609 * 10;
    printf("%.2lf miles per gallon blir %.2lf liter per mile!", m, l);
    return 0;
}