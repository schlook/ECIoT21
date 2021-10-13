#include <stdio.h>
int main(void)
{   //Om jag lägger in '\0' som avslut i arrayen får jag varning
    char mychar[]={'B', 'a', 'b', 'y', 's', 'h', 'a', 'r', 'k'};
    for(int i=0; i<=(sizeof(char)/sizeof(mychar[0])); i++)
    {
        //Varför får jag bara 'Ba' i utskrift??
    printf("%c", mychar[i]);
    }
    return 0;
}