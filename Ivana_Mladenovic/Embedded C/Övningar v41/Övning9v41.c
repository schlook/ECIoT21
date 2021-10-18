#include <stdio.h>
#include <string.h>
#define BUF 100
int main(void)
{
    char first[BUF];
    char second[BUF];
    printf("Skriv ett ord: ");
    scanf("%s", &first);
    printf("Skriv ett ord till: ");
    scanf("%s", &second);
    if (!stricmp(first, second))
    {
        printf("%s och %s är samma ord!\n", first, second);
    }
    else
    {
        printf("%s och %s är inte samma ord!\n", first, second);
    }
    return 0;
}