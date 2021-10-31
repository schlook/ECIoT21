#include <stdio.h>

#define BUF 1000

void printOutArr(int arr[], int length);

int main(void)
{
    // BUF 1000 är max värdet vi kan mata in. 
    int even[BUF] = {0}, odd[BUF] = {0};
    int size;
    printf("Numbers of Arrays:\n");
    scanf("%d", &size);

    int countOdd = 0;
    int countEv = 0;

    for (int i = 1; i < size; i++)
    { // Kollar efter restvärde. Modulus. Finns så sparas i arrayen f
        if ((i % 2) == 1) 
        {
            odd[countOdd] = i; 
            countOdd++;
        }
        else
        {
            even[countEv] = i;
            countEv++;
        }
    }
    printf("Odd numbers:\n");
    printOutArr(odd, countOdd);
    printf("Even nummbers:\n");
    printOutArr(even, countEv);
    
    return 0;
}
void printOutArr(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i + 1] == '\0')
        {
            printf("%d ", arr[i]);
        }
        else
        {
            printf("%d, ", arr[i]);
        }
    }
    printf("\n");
}