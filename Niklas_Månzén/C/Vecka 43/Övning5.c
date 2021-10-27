#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

enum color{spader = 0,ruter = 10, hjärter = 20, klöver = 3,  };
typedef enum color kort; // Funkar!

int main(void)
{
    int var = sizeof(kort); // Funkar också! :)
    printf("Size of faerg (enum color) : %d bytes" , var);

    return 0;
}