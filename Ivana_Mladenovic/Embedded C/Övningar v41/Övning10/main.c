#include <stdio.h>
#include "C:\Users\ivan_\Desktop\ECIoT21\Ivana_Mladenovic\Embedded C\Övningar v41\Övning10\minfil.h"
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