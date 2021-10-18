#include <stdio.h>

int num1;

int main(void) 
{
    
    printf("Type in a number: ");
    scanf("%d", &num1);

    int i;
    for (i = 1; i < 2; ++i) 
    {
        
        printf("%d\n", num1);
    }

    return 0;
}