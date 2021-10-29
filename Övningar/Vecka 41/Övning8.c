#include <stdio.h>

#define BUF 100

int main()
{
    int num[BUF];
    int storlek;

    printf("Skriv in antal fält:\n");
    scanf("%d", &storlek);

    /* Input array elements */
    printf("Skriv in %d fält:\n", storlek);
    for (int i = 0; i < storlek; i++)
    {
        scanf("%d", &num[i]);
    }

    /*
     * Print array in reversed order
     */
    printf("Fältvariabel i omvänd ordning:\n");
    // Börjar på storlekens storlek (minus den sista \0) och räknar neråt så länge 
    // 'i' är större eller lika med noll.
    for (int i = storlek - 1; i >= 0; i--)
    {
        // \t betyder tabulent
        printf("%d\t", num[i]);
    }

    return 0;
}