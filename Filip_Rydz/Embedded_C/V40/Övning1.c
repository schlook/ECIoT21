#include <stdio.h>
#define PI 3.141592653589793

double thisFunction(void) 
{
    return PI;
}

int main(void) 
{    
    printf("Function has value of PI: %.4lf\n", thisFunction());
    return 0;
}