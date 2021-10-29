#include <stdio.h>
#include <stdlib.h>

float kalkyleraSumma(float number[])
{
    float sum = 0;
    for (int i = 0; i < 6; i++)
    {
        sum +=number[i];
    }
    printf("Answer: %f",sum);
}


int main(void)
{
    float number[]={13.37, 420, 2.5, 22, 9.99};
    float resultat;
    printf("Skriv in värden i fältvariabeln (5 nummer): ");
    scanf("%f %f %f %f %f", &number[0],&number[1], &number[2], &number[3], &number[4]);
    resultat=kalkyleraSumma(number);
    return 0;
}