#include <stdio.h>
int main(void)
{   //Om jag lägger in '\0' som avslut i arrayen får jag varning
    char mychar[]={'B', 'a', 'b', 'y',' ', 's', 'h', 'a', 'r', 'k','\0'};
    for(int i=0; mychar[i]!='\0'; i++)
    {
        printf("%c", mychar[i]);
    }

    return 0;
}