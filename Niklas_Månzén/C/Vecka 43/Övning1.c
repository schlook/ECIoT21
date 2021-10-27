#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

int main()
{
    srand(time(0));

    printf("\t\tRANDOM..\n.............................................\n");
    Sleep(1000);

    for (int i = 0; i < 4; i++)
    {
        printf("%10d", rand());
    }
    printf("\n");
    Sleep(1000);

    for (int i = 0; i < 4; i++)
    {
        printf("%10.f", (float)rand());
    }
    Sleep(1000);
    printf("\n.............................................\n\t\t..IZE!\n");  

    return 0;
}