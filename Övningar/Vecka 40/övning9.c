#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 15; i++)
    {
        // Måste kapsla in hela villkoret
        if ((i == 0) || (i == 5) || (i == 10))
        {
            printf("Baby shark ");
        }
        // Kapsa in allt.. (i >= 1) || ( i <= 3) ... går inte.
        if (((i >= 1) || (i <= 3)) || ((i >= 6) || (i <= 8)) || ((i >= 11) || (i <= 13)))
        {
            printf("Do ");
        }

        // kapsla in allt
        if ((i == 4) || (i == 9) || (i == 14))
        {
            printf("\n");
        }
    }

    return 0;
}