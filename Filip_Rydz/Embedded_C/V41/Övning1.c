#include <stdio.h>

void example1(char myArray[]);
void example2(char myArray[]);

char myArray[] = {'b', 'a', 'b', 'y', ' ', 's', 'h', 'a', 'r', 'k', '\0'};

int main(void) 
{
    
    example1(myArray);
    example2(myArray); // wont work

    return 0;
}

void example1(char myArray[])
{
    for (int i = 0; myArray[i] != '\0'; i++)
    {
        // %c för char, newVae [i] = går igenom fältvariabeln tills dess att slutet är nått, dvs '\o'
        printf("%c", myArray[i]);
    }
    printf("\n");
}

// Detta exmpel fungerar inte då då det blir problem när funktion anropar argument.
//Printar endast ut "b"
void example2(char myArray[])
{
    for (int i = 0; i < (sizeof(char) / sizeof(myArray[0])); i++)
    {
        printf("%c", myArray[i]);
    }
    printf("\n");
}

