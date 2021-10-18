#include <stdio.h>

void function(void);

char askMe[100];

int main(void) 
{
    function();
    
    printf("%s\n", askMe);
    
    return 0;
}

void function(void)
{
    printf("Type anything:\n");
    scanf("%s", askMe);
}