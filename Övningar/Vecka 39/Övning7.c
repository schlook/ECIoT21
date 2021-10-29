#include <stdio.h>

#define PI 3.141592653589793

int main(void)
{
    // Radie
    double r = 5;
    // Omkrets, du kan döpa om double omkr till O
    // för att träna
    double omkr = 2 * PI * r;
    // Area, du kan döpa om double area till A
    // För att träna
    double area = PI * r * r;

    // Om talet är totalt mindre än 7 tecken långt kommer det inledas med mellanslag
    // %7.2f formaterar inte heltalet utan det ger mellanrum mot de siffror om inte är med
    // ex: 12.12 = 5 tecken långt
    // kommer ge ut svar:  12.12
    printf("Omkrets: %7.2f\n", omkr);
    printf("Area: %7.2f\n", area);

    return 0;
}