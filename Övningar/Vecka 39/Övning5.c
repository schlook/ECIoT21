#include <stdio.h>

int main(void)
{
    char punkt = '.', streck = '-';

    printf("%c%c%c", punkt, punkt, punkt);
    printf(" ");
    printf("%c%c%c", streck, streck, streck);
    printf(" ");
    printf("%c%c%c", punkt, punkt, punkt);

    return 0;
}