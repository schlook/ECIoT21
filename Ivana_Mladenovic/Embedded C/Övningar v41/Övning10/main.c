#include <stdio.h>
int main(void)
{
    double num[] = {22, 33, 44.3, 1, 23};
    int lengd = sizeof(num);

    double sumKv = kvd(num, lengd);
    double sum = summa(num, lengd);

    printf("Summan: %.2lf\n", sum);
    printf("Kvadratisk Summa: %.2lf\n", sumKv);
    return 0;
}