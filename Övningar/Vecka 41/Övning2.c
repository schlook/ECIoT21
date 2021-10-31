#include <stdio.h>

// Tar emot 100 tecken.
char minaFelt[100];

void skrivInmatning(void);

int main(void)
{
    skrivInmatning();

    printf("%s\n", minaFelt);
    return 0;
}

void skrivInmatning(void)
{
    printf("Skriv in valfri text:\n");
    scanf("%s", &minaFelt);
}