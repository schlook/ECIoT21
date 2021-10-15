#include <stdio.h>

#define BUF 6
// deklarera funktionen som summerar våra inmatade tal.
float sumOfNumbers(float input[]);


int main(void)
{
    // deklarerar arrayen för inputs samt result
    float result, input[BUF];
    for (int i = 0; i < BUF; i++)
    {
        printf("Ange %d värdet:\n", i + 1);
        scanf("%f", &input[i]);
    }
    // kör funktionen och tillger result det värde funktionen sumOfNumbers returnernar
    result = sumOfNumbers(input);
    printf("Summan av värdena blir: %.2f\n", result);
    return 0;
}

float sumOfNumbers(float input[])
{
    int sum = 0.0;
    for (int i = 0; i < BUF; i++)
    {
        sum += input[i];
    }
    return sum;
}