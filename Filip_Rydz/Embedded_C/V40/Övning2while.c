#include <stdio.h>
#include <unistd.h>

int num1;

int main(void) 
{
    
    printf("Type in a number: ");
    scanf("%d", &num1);

    int a = 1;

    while (a <= 2) 
    {

        printf("%d\n", num1);
        a++;
        usleep(1000000);
    }

    return 0;
}