#include <stdio.h>
#include "minfil.h"
int main(void)
{
    double num[5] = {22, 33, 44, 1, 23};
    int lengd = sizeof(num);

    double sumKv = Kvadrat(num, lengd);
    double sum = Summa(num, lengd);
    printf("\n");
    printf("Summa: %.2lf\n", sum);
    printf("Kvadratisk Summa: %.2lf\n", sumKv);
    return 0;
}