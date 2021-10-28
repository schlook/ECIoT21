#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

enum listilist{Mamma=1, Pappa, Syster, Bror, Hund, Katt};
enum listilist A = Katt;

int main(void)
{
    printf("\t\t\t-Enum 'listilist'-\n"); 
    printf("....................................................................\n");
    printf("\t\t\tMamma \t= \t%d\n\t\t\tPappa \t= \t%d\n\t\t\tSyster \t= \t%d\n\t\t\tBror \t= \t%d\n\t\t\tHund \t= \t%d\n\t\t\tKatt \t= \t%d\n", Mamma, Pappa, Syster, Bror, Hund, Katt);
    printf("....................................................................\n");
    printf("The value saved in variable A (From enum 'listilist' -- Katt) is : %d\n", A);
    printf("....................................................................\n");
    
    // Spenderade onödigt länge på hur det skulle se ut!

    return 0;
}