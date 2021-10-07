#include <stdio.h>

int main(void)
{
    int i;
    for (i = 0; i < 15; i++)
    {
        if ((i == 0) || (i == 5) || (i == 10))
        
            printf("Baby shark ");
        //Lägg allt i paranteser annars blir det fel utskrift
        if (((i >= 1) || (i <= 3)) || ((i >= 6) || (i <= 8)) || ((i >= 11) || (i <= 13)))
        
            printf("Do ");
        
        if ((i == 4) || (i == 9) || (i == 14))
        
            printf("\n");
        
    }

    return 0;
}