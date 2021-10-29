#include <stdio.h>

int main(void)
{
    int heltal;
    printf("Skriv in ett heltal:\n");
    scanf("%d", &heltal);
    
    int *p;
    p = &heltal;
    
    printf("Heltal: %d\n", heltal);
    printf("Pekare p = %d\n", *p);
    
    return 0;
}