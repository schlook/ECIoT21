#include <stdio.h>
//
float kalkyleraSumma(float num[]);

#define BUF 6

int main()
{
    // Om man anger en
    float resultat, num[BUF];

    for (int i = 0; i < BUF; i++)
    {
        // i + 1 bara så det inte ser konstigt ut i utskriften
        printf("Ange %d numret\n", i + 1);
        scanf("%f", &num[i]);
    }

    // num fältvariabel passas till kalkyleraSumma()
    resultat = kalkyleraSumma(num);
    // .2f = skriver bara ut 2decimaler med float.
    printf("Result = %.2f", resultat);
    return 0;
}

// Tar emot argument num[]
float kalkyleraSumma(float num[])
{
    // Startar på 0.0 så att inget finns.
    float sum = 0.0;
    // Loopar igenom arrayen, så länge det är under 6
    for (int i = 0; i < BUF; ++i)
    {
        // Summan adderas per cykel
        sum += num[i];
    }

    // Returnerar summan
    return sum;
}