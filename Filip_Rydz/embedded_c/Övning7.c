#include <stdio.h>
#define PI 3.141592653589793

int main(void)
{
    double r = 10;
    // C = 2PIr
    // A = PIr^2
    double om = 2 * PI * r;
    double A = PI * r * r;
    printf("En cirkel med radien:  %.lf", r);
    printf(" har omkretsen: %.3lf\n", om);
    printf("Samma cirkel har arean: %.3lf\n", A);
    
    return 0;
}