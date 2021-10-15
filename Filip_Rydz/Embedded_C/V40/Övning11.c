#include <stdio.h>

int main(void) {

    int rader;

    printf("Skriv in antal rader för din diamant (endast halva diamanten):\n");
    scanf("%d", &rader);

    for (int i = 0; i <= rader; i++)
    {
        for (int j = 1; j <= (rader - i); j++)
        {
            printf(" ");
        }
        // 
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            printf("*");
        }
        // 
        printf("\n");
    }

    // Vi har nått halva diamanten och räknar då neråt
    for (int i = (rader - 1); i >= 1; i--)
    {
        // börjar på 1, om j mindre eller lika med rader, minus iterationen
        for (int j = 1; j <= (rader - i); j++)
        {
            // skriv ut mellanslag
            printf(" ");
        }
        // k börjar på 1, om k mindre eller lika med 2 * iteration - 1
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            // Då skriver vi ut en asterisk
            printf("*");
        }
        printf("\n");
    }
}