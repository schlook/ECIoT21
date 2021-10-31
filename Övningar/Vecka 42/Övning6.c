#include <stdio.h>

// Säger att swap har int *a och int *b som argument.
void swap(int *a, int *b);

// Huvudfunktionen
int main(void)
{
    int m = 25;
    int n = 100;
    printf("m är %d och n är %d\n", m, n);
    // vi anger adresserna för där m och n är sparade
    // fördelen med att ange adressen är att ingen separat tilldelning behövs i programmet, det sköter sig själv.
    swap(&m, &n);
    printf("nu är m %d och n är %d\n", m, n);
    return 0;
}

// Växla värde mellan värde a och värde b
// Void returnerar ingenting utan den ger värde till a och b som läses från
// Adresseringen i mainfunktionen, genom &-tecknet.
void swap(int *a, int *b)
{
    // Det som är i denna funktion lever endast i denna funktion
    // För att inte förlora värdet i variabel a, sparar vi den temporärt i en ny variabel.
    int temp;
    temp = *a;
    // a skrivs över med värdet från b
    *a = *b;
    // och b skrivs över med värdet från a, genom temp.
    *b = temp;
}
