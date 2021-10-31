#include <stdio.h>

int main(void)
{
    // 01110
    // 11000
    // ----- (1 eller 0 ger 1. 0 eller 1 ger 1. 0 eller 0 ger 0.)
    // 11110 = 30
    printf("1. 14 | 24 = %ld (01110 | 11000) \n", 14 | 24);

    printf("2. 8 << 1 = %ld (8 = %08d)\n", 8 << 1, 1000);
    printf("Flytta bitarna åt vänster (fyll på med en 0:a), 16 = %08d\n", 10000);

    // %04 = inled med 4 nollor, och sen som vanligt d som digit.
    // %04d = inled talet med 4 nollor (kan ej printa ut mer än en 0:a)
    printf("3. 0 | 8 = %ld (%08d | %08d)\n", 0 | 8, 1000, 0);

    printf("4. 31 && 0 = %ld (%08d && %08d)\n", 31 && 0, 110001, 0);

    printf("5. 5 << 2 = %ld (5 = %08d)\n", 5 << 2, 101);
    printf("Flytta två bitar åt vänster blir 20 (fyll på med 2:or) = %08d\n", 10100);

    // Sant eller falskt
    printf("6. 31 || 7 = %ld\n", 31 || 7);

    // 10110
    // 10111
    // ----- (endast 1 och 1 ger 1. 1 och 0 ger 0 eller 0 och 1 ger 0. 0 och 0 ger så klart 0)
    // 10110 = 22
    printf("7. 22 & 23 = %ld (%08d & %08d)\n", 22 & 23, 10110, 10111);

    printf("8. 0 | 1 = %ld (0 | 1)\n", 0 | 1);

    // Sant eller falskt
    printf("9. 0 || 22 = %ld\n", 0 || 12);

    // XOR
    // 10001
    // 01000
    // ----- (1 och 0 ger 1, 0 och 1 ger 1, 0 och 0 ger 0 samt 1 och 1 ger 0)
    // 11001 = 25
    printf("10. 17 ^ 8 = %ld (%08d ^ %08d)\n", 17 ^ 8, 1111, 1000);

    return 0;
}