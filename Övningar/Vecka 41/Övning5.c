#include <stdio.h>

int main(void)
{
    int num;
    double sum[1000];
    printf("Ange ett nummer:\n");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        // kollar om det är första loopen
        if (i == 0)
        {
            sum[i] = 5.5;
        }
        else
        {
            // annars adderar vi 5.5 med föregående tal
            sum[i] = sum[i - 1] + 5.5;
        }
    }

    printf("Skriver ut alla nummer:\n");
    for (int i = 0; i < num; i++)
    {
        printf("num[%d] = %.2lf\n", i, sum[i]);
    }

        return 0;
}