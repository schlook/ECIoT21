#include <stdio.h>
int main(void)
{
    int nr;
    printf("Ange ett nummer:\n ");
    scanf("%d", &nr);
    int summa = 0;
    int k = 1;
    while (k <= nr)
    {
        summa = summa + k;
        k = k*k;
    }
    printf("Summan är %d\n", summa);
    return 0;
}