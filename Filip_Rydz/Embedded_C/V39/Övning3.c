#include <stdio.h>

int main(void)
{
    printf("Teperatur i Farenheit?\n");
    double f;
    scanf("%lf", &f);

    double c = (f - 32) * 5 / 9;
    printf("%.2f grader F motsvarar %.2f grader C", f, c);
}