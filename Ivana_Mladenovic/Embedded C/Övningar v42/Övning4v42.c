#include <stdio.h>
int main(void)
{
    int tal;
    printf("Ange ett heltal: ");
    scanf("%d", &tal);
    int *pkr;
    pkr=&tal;
    printf("Pekaren pkr= %d", *pkr);
    return 0;
}