#include <stdio.h>
int main(void)
{
    char mychar[]={'B', 'a', 'b', 'y', 's', 'h', 'a', 'r', 'k'};
    for(int i=0; i<=(sizeof(char)/sizeof(mychar[0])); i++)
    {
        //Varför får jag bara 'Ba' i utskrift??
    printf("%c", mychar[i]);
    }
    return 0;
}