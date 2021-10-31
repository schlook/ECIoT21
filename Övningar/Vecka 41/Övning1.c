#include <stdio.h>

void firstFunction(char a[]);
void secondFunction(char a[]);

int main(void)
{
    char a[] = {'b', 'a', 'b', 'y', ' ', 's', 'h', 'a', 'r', 'k', '\0'};

    secondFunction(a);

    return 0;
}

/*
 * Du behöver inte göra så här, endast för visning
 * Denna funktion loopar igenom fältvariabeln med
 * hjälp av sizeof, dessvärre kommer det bara ett tecken
 */
void firstFunction(char a[])
{
    for (int i = 0; i < (sizeof(char) / sizeof(a[0])); i++)
    {
        printf("%c", a[i]);
    }
    // Ny rad utanför loop
    printf("\n");
}

/*
 * Gör så här istället
 */
void secondFunction(char a[])
{
    // Loopar fram till sista tecknet i fälten
    for (int i = 0; a[i] != '\0'; i++)
    {
        // Skriver ut ett tecken i taget
        printf("%c", a[i]);
    }
    printf("\n");
}