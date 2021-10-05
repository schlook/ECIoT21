#include <stdio.h>
#define PI 3.141592653589793
int main(void)
{
    double r;
    printf("Ange radie: ");
    scanf("%lf", &r);
    double o= 2 * PI * r;
    double a= PI * r * r;
    printf("Omkretsen är %7.3f och arean är %7.3f!", o, a);
    return 0;
}