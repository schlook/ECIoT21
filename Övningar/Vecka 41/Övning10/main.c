#include <stdio.h>
// får INTE inkludera .c filer
#include "ovning10.h"

int main(void)
{
    double num[5] = {22, 33, 44.33, 1, 23};
    int lengd = sizeof(num);

    double sumKv = kvadSum(num, lengd);
    double summa = sum(num, lengd);


    printf("Summan: %.2lf\n", summa);
    printf("Kvadratisk Summa: %.2lf\n", sumKv);
    
    return 0;
}
