#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // Bör endast anropas EN gång
    srand(time(0));

    for (int i = 0; i < 4; i++)
    {
        printf("%6d ", rand());
    }
    printf("\n");
    
    for (float i = 0; i < 4; i++)
    {
        printf("%6.f ", (float)rand());
    }
    printf("\n");

    return 0;
}