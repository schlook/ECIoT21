#include <stdio.h>
int funktion(int *pkr);
int main(void)
{
    int tal=10;
    int *pkr=&tal;
    funktion(pkr);
    printf("%d", *pkr);
    return 0;
}
int funktion(int *pkr)
{
    (*pkr)++;
}