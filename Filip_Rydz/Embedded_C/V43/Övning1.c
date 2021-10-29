#include <stdio.h>
#include <stdlib.h> // rand() är en del av biblioteket stdlib.h
#include <time.h> // time() är en del av biblioteket time.h

int main(void)
{
    // anges EN gång först i main, detta för att få datorn att slumpa fram OLIKA nummer vid varje körning
    // skulle inte srand(t...); skrivas ut slumpas ett och samma nummer fram vid varje körning
    srand(time(0)); 

    // med for-loopen slumpas 4 heltal ut
    for (int i = 0; i < 4; i++)
    {
        // %[length]specifier, formaterar strängen
        printf("%7d ", rand() % 100);
    }
    printf("\n");

    // for-loopen slumpar ut 4 heltal som senare typkonverteras till floats
    for (int i = 0; i < 4; i++)
    {
        int intNum = rand() % 100;
        // explicit typkonvertering från int till float, behöver deklarera float-variabel som får värdena från int intNum
        float fInt = (float)intNum;
        // tabulent \t
        printf("%.f\t", fInt);
    }
    printf("\n");
    
    return 0;
}