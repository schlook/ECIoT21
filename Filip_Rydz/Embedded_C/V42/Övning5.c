#include <stdio.h>

void funktionPlusEtt(int *p); // med funktionen vill vi öka 

int main(void)
{
    int *p, i = 10; // deklarera pekare (p) och 
    p = &i;
    funktionPlusEtt(p); // anropar funktionPlusEtt med argumentet pekare p som pekar på i, dvs = 10

    printf("%d\n", *p);
    return 0;
}
void funktionPlusEtt(int *p) // lägger till ett (++)
{
    (*p)++; // ++ har företräde över *, därför är (*p) inom parentes. 
}