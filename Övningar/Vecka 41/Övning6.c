#include <stdio.h>

// main funktionen
int main(void)
{
    int reknare, storlek;
    int felt[100];

    printf("Skriv in storleken för dina fält:\n");
    scanf("%d", &storlek);

    
    for (int i = 0; i < storlek; i++)
    {
        printf("%d fältet:\n", (i + 1));
        scanf("%d", &felt[i]);
    }


    for (int i = 0; i < storlek; i++)
    {
        for (int j = i + 1; j < storlek; j++)
        {
            if (felt[i] == felt[j])
            {
                // hittade det
                reknare++;
                // Bryt, annars blir det fel
                break;
            }
        }
    }

    printf("\nTotal antal dubbletter hittades i felt = %d", reknare);

    return 0;
}