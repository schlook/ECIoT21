#include <stdio.h>

int num1;

int main(void) 
{
    do 
    {
        printf("Type in a 3 digit number: ");
        scanf("%d", &num1);
    } 
    while (num1 < 100); 
        
        int i;
        for (i = 0; i < 2; i++) 
        {
            
            printf("%d\n", num1);
        }
    return 0;
}