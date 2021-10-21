#include <stdio.h>
void swap(int *a, int *b);
int main(void)
{
    int nr1=10;
    int nr2=20;
    printf("nr1 är %d och nr2 %d är \n", nr1, nr2);
    //funktionen tar emot adresser av nr1 och nr2
    swap(&nr1, &nr2);
    printf("Nu är nr1 %d och nr2 %d\n", nr1, nr2);
    return 0;
}
void swap(int *a, int *b)
{
    //här skapas en temporär variabel temp för att lagra värdet av *a i den
    //annars om vi bara skriver *a=*b, *b=*a förloras värdet i *a och
    //utskriften blir samma värde i både nr1 och nr2
    int temp=*a;
    *a=*b;
    *b=temp;
}