#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void plus(int *p)
{
    (*p)++;

}
int main()
{

    int HELTAL = 10;
    int *pekare;
    pekare = &HELTAL;
    
    printf("HELTALs v\x84rde = %d\n", HELTAL);
    printf("HELTAL:s Minneadress = %d\n", &HELTAL);
    Sleep(1000);
    printf("...\n");
    Sleep(1000);
    printf("Pekarens dereference-v\x84rde = %d\n", *pekare);
    printf("Pekare pekar mot minneadressen (HELTAL) = %d\n", pekare);
    Sleep(1000);
    printf("...\n");
    Sleep(1000);
    printf("Vi passar Pekarens l\x86nade minnesadress till plus-funktionen...\n");
    plus(pekare);
    Sleep(1000);
    printf("...\n");
    Sleep(1000);
    printf("HELTALs nya v\x84rde = %d\n", HELTAL);
    printf("HELTAL:s Minneadress = %d\n", &HELTAL);
    Sleep(1000);
    printf("...\n");
    Sleep(1000);
    printf("Pekarens nya dereference-v\x84rde = %d\n", *pekare);
    printf("Pekare pekar fortfarande mot minneadressen (HELTAL) = %d\n", pekare);
    Sleep(1000);
    printf("...\n");
    

    return 0;
}