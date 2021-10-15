#include <stdio.h>
#define PI 3.141592653589793

int main(void)
{
    printf("Vi har en cirkel, vilken är radien? ");
    float r;
    scanf("%f", &r);
    
    float C = 2 * PI * r;
    float A = PI * r * r;

    printf("Omkrets: %.3f\n", C);
    printf("Area: %.3f\n", A);

    return 0;

}