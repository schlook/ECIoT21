#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Type in two numbers:\n");

    scanf("%d %d", &a, &b); 

    int sum = a + b;
    int dif = a - b;
    printf("The sum is: %d\n", sum);
    printf("The diference is: %d", dif);

    return 0;
}