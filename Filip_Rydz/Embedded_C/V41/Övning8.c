#include <stdio.h>

int main(void)
{
    int felt, tal;
    printf("Ange totala fält: \n");
    scanf("%d", &felt);

    int array[felt];
    for (int i = 0; i < felt; i++)
    {
        printf("Skriv in tal %d: \n", i + 1);
        scanf("%d", &tal);
        array[i] = tal;
    }
    printf("I omvänd ordning:\n");

    for (int i = felt - 1; i >= 0; i--)
    {
        printf("%d\n", array[i]);
    }
    printf("\n");
    return 0;
}