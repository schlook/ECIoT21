#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <windows.h>

void schwappie(int *tal1,int *tal2)
{
    int temporary;
    temporary = *tal1;
    *tal1 = *tal2;
    *tal2 = temporary;
}

int main ()
{
    int A = 300;
    int B = 500;

    printf("Value of A atm : %d\n", A);
    printf("Value of B atm : %d\n", B);
    printf("Adress of A atm : %d\n", &A);
    printf("Adress of B atm : %d\n", &B);
    printf("Passing adresses to the function ''schwappie'' ...\n");

    (schwappie(&A,&B));

    printf("New Value of A : %d\n", A);
    printf("New Value of B : %d\n", B);
    printf("Adress of A : %d\n", &A);
    printf("Adress of B : %d\n", &B);

    return 0;
}