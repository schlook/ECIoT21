#include <stdio.h>

int main (void) 
{
    int numArr, doubles; // numArr = user types in total number of arrays, count doubles+ when values mach
    printf("Type numbers of arrays: \n");
    scanf("%d", &numArr);
    printf("You set it to %d values in total\n", numArr);

    int myArray[numArr]; // declare array and initiate with userinput (num)
    
    for (int i = 0; i < numArr; i++) // fill myArray with userinput values
    {
        printf("Type in value %d: \n", (i+1));
        scanf("%d", &myArray[i]);
    }
    for (int i = 0; i < numArr; i++)
    {
        for (int j = i+i; j < numArr; j++)
        {
            if (myArray[i] == myArray[j])
            {
                doubles ++; // each time loop find values that mach = doubles ++
            }
        }
    }
    printf("Number of doubles: %d\n", doubles);
    return 0;
}