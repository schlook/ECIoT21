#include <stdio.h>
int main(void)
{
    
    int antal_bytes= sizeof (long double);
    printf("%lf", antal_bytes);//får svar 0.000000- gör jag rätt??
    return 0;
}