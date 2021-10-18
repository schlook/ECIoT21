#include <stdio.h>
#include <string.h>

int main(void)
{
    double f, c;
    char unit[1];
    printf("Vad vill du konvertera?\n");
    printf("Fahrenheit eller Celsius\n");
    scanf("%s", &unit);

    if(!strcmp(unit, "Fahrenheit"))
    {
        printf("Temperatur i F?\n");
        scanf("%lf", &f);

        double c = (f - 32) * 5 / 9;
        printf("%.2f grader F motsvarar %.2f grader C\n", f, c);
    }
    else if(!strcmp(unit, "Celsius"))
    {
        printf("Tempteratur i C\n");
        scanf("%lf", &c);

        double f = (c + 32) * 9 / 5;
        printf("%.2f grader C motsvarar %.2f grader F\n", c, f);
    }
    else
    {
        printf("Wrong type \nProgram shut down...\n");
    }

    return 0;
}