#include <stdio.h>
int main(void)
{
    int rader;
        printf("Ange önskat antal rader: ");
        scanf("%d", &rader);
    for (int i = 1; i <=rader; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}