#include <stdio.h>
int main(void)
{
    int rader;
        printf("Ange önskat antal rader: ");
        scanf("%d", &rader);
    //för i lika med 0; i mindre eller lika med antal rader; öka med 1
    for (int i = 1; i <=rader; i++)
    {
        //för j lika med 1; j mindre eller lika med i; j öka med 1
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}