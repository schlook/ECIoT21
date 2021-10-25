#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <windows.h>

int main()
{

    printf("Skriv ett heltal, tack!\n : ");
    
    int heltal, *ptr;
    ptr = &heltal;

    scanf("%d",&heltal);
    
    printf("Heltalets v\x84rde \x84r : %d\nHeltalets minnesadress \x84r : %d\n", heltal, &heltal);
    printf("Pointern ptr:s l\x86nade v\x84rde \x84r : %d\nPointern ptr:s pekar mot minnesadressen : %d\n", *ptr, ptr);

    return 0;
}