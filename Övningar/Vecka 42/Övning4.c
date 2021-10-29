#include <stdio.h>

int main(void)
{
    int num;
    printf("Skriv in ett heltal:\n");
    scanf("%d", &num);

    int *p;
    p = &num;

    printf("pekare p = %d", *p);
}