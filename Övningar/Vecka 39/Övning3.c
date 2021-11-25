#include <stdio.h>

int main(void)
{
    // Skriv ut på skrämen vad vi vill veta
    printf("Temperatur i Fahrenheit?\n");
    // f som i Fahrenheit
    double f;
    // Det användaren skriver in
    scanf("%lf", &f);

    double c = (f - 32) * 5 / 9;
    // %.2f = 2 decimaltecken och float
    // Skriver ut exempel: 106.00 grader F motsvarar 41.11 grader C
    printf("%-+.2f grader F motsvarar %-+.2f grader C", f, c);
}
