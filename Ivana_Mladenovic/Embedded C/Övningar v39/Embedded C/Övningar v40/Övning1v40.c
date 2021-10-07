#include <stdio.h>
double MinFunction(void)
{
double tal1=56.5;
double tal2=43.7;
return (tal1/tal2);
}
int main(void)
{
    printf("%.2lf", MinFunction());
    return 0;
}