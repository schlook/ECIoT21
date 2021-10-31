#include <stdio.h>
// 
float kalkyleraSumma(float num[]);

int main()
{
    float resultat, num[] = { 22.1, 55, 22.6, 3, 40.5, 18 };

    // num fältvariabel passas till kalkyleraSumma()
    resultat = kalkyleraSumma(num);
    // .2f = skriver bara ut 2decimaler med float.
    printf("Resultat = %.2f", resultat);
    return 0;
}

// Tar emot argument num[]
float kalkyleraSumma(float num[])
{
    // Startar på 0.0 så att inget finns.
    float sum = 0.0;
    // Loopar igenom arrayen, så länge det är under 6
    for (int i = 0; i < 6; ++i)
    {
        // Summan adderas per cykel
        sum += num[i];
    }

    // Returnerar summan
    return sum;
}