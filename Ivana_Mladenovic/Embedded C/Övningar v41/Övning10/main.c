#include <stdio.h>
#include "minfil.h"
int main(void)
{
    double num[] = {22, 33, 44.3, 1, 23};
    int lengd = sizeof(num);

    double sumKv = Kvadrat(num, lengd);
    double sum = Summa(num, lengd);

    printf("Summa: %.2lf\n", sum);
    printf("Kvadratisk Summa: %.2lf\n", sumKv);
    return 0;
}