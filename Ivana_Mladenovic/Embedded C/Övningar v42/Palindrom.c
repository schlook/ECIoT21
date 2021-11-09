#include <stdio.h>
int main(void)
{
    char text[20];
    int start, mitt, slut, lengd=0;
    printf("Skriv ett ord du tror är palindrom: \n");
    scanf("%s", &text);
    while(text[lengd] != '\0')
    {
        //räknar +1 för varje varv
        lengd++;
    }
    //initierar slut med längden av char -1 pga sista tomma elementet \0
    slut= lengd-1;
    //mitt får mittvärde, hela längden delat på 2
    mitt= lengd/2;
    for (start = 0; start < mitt; start++)
    {
        if(text[start] =! text[slut])
        {
            printf("Det är inte en palindrom!\n");
            break;
        }
        slut--;
    }
    if(start == mitt)
    {
        printf("Der är ett palindrom!\n");
    }
    
    return 0;
}