#include <stdio.h>

int main(void)
{
    int choice, num1, num2;

    printf("What would you like to do?\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);

    if ((choice<1) | (choice>4))
    {
        printf("Wrong type \n Program shut down...");
    }
        else
        {
            printf("Type two numbers: ");
            scanf("%d%d", &num1, &num2);

        if (choice==1)
        {
            printf("Sum: %d", (num1 + num2));
        }
            else if (choice==2)
            {
                printf("Difference: %d", (num1 - num2));
            }
            else if (choice==3)
            {
                printf("Product: %d", (num1 * num2));
            }
            else if (choice==4)
            {
                printf("Fraction: %d", (num1 / num2));
            }
        }
        
    return 0;
}