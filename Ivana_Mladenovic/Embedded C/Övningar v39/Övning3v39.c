#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    double f;
    printf("Skriv temperatur i Fahrenheit: ");
    scanf("%lf",&f);//Här visas inmatning från användaren
    double c=(f-32)*5/9;//formel för uträkning Fahrenheit till Celsius
    printf("%.0lf grader i Fahrenheit motsvarar %.0lf grader i Celsius!", f,c);
    //%.0lf(.0 betyder att talet ska skrivas ut utan decimaler)
}