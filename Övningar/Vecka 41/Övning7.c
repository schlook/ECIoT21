#include <stdio.h>
#include <stdlib.h>

#define BUF 1000
void skrivUtFelt(int felt[], int lengd);

int main(void)
{
    // 1000 är buffern, maxvärde vad vi tar emot.
    // Kan göra skillnad att lägga till {0} om du får felaktiga värden vid print.
    // De håller 1000 tecken var = 2000 max 
    int udda[BUF / 2], jemn[BUF / 2];

    int reknaUdda, reknaJemna;
    int storlek;

    // printf("%d\n", INT_MAX);

    printf("Skriv in storlek på fälten:\n");
    scanf("%d", &storlek);

    reknaUdda = 0;
    reknaJemna = 0;

    for (int i = 1; i < storlek; i++)
    {
        if ((i % 2) == 1)
        {
            udda[reknaUdda] = i;
            // Ökar räknaUdda med ett
            reknaUdda++;
        }
        else
        {
            jemn[reknaJemna] = i;
            // Ökar räknaJämna med ett
            reknaJemna++;
        }
    }

    printf("Antal udda tal:\n");
    // Här skickar du inte med [] utan hela variabeln
    skrivUtFelt(udda, reknaUdda);

    printf("Antal jämna tal:\n");
    // Här skickar du inte med [] utan hela variabeln
    skrivUtFelt(jemn, reknaJemna);

    return 0;
}

// skriv ut fälten
void skrivUtFelt(int felt[], int lengd)
{
    /// Skriver ut texten nedan
    for (int i = 0; i < lengd; i++)
    {
        // Kollar om nästkommande fält är tom, då skriver vi ut utan komma
        // Det här behöver du inte göra. :)
        if (felt[i + 1] == '\0')
        {
            printf("%d ", felt[i]);
        }
        else
        {
            printf("%d, ", felt[i]);
        }
    }
    // separera med ny rad
    printf("\n");
}