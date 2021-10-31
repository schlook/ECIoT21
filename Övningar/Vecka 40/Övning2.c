#include <stdio.h>

int main(void)
{
    int i = 0;

    // Eftersom i startar på 0 behöver vi bara kolla om i är mindre än 2 (0, 1 = 2 tal)
    // 
    do
    {
        // Skriver ut 22
        printf("%d\n", 22);
        // Ökar iterationen (annat ord för upprepning) med 1 per cykel
        i++;
    } while (i < 2);
   
    return 0;
}

