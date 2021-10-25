#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

int main()
{
    char text[256];
    char *pkr = text;
    int antalOrd = 0;
    
    printf("Write any text please!\n");
    scanf("%s", &text);
    
    /*  pkr pekar "som default" mot text's basadressminne och första Element (index 0). Första byten.
        Efter första whilen ökar pkr med 1 och hoppar då alltså till andra Elementets adress och DESS värde osv
        Vi dereferencar varje adress där pekaren hamnar.
        Detta pågår så länge vi inte nuddar NULL CHARACTER \0 */

    while (*pkr++ != '\0') 
    {
        antalOrd++;
    }

    printf("You wrote : %s\nWith the length of : %d\n", text,antalOrd );
    
    return 0;
}