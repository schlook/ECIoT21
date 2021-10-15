#include <stdio.h>
// deklarerar funktionen som ska summera talen i vår array
float sumNumbers(float numbers[]);
// deklarerar och initierar talen i arrayen, samt resultat fältet
float result, numbers[] = {10.2, 3.4, 5, 3.14, 21, 5.6, 2.1, 55};

int main(void) 
{
    result = sumNumbers(numbers);
    printf("The sum of numbers is: %.2f\n", result);

    return 0;
}

float sumNumbers(float numbers[])
{
    
    // startar på 0 så att den utgår från ingeting.
    float sum = 0.0;
    // loopar igenom arrayen
    for (int i = 0; i < 8; i++)
    {
        // summan adderas per cykel
        sum += numbers[i];
    }
    return sum;
}

