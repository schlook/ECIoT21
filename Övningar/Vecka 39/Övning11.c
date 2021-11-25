#include <stdio.h>

int main(void)
{

    // Bitvis ELLER
    printf("1. 14 | 24 = %d\n", 14 | 24);

    // Bitvis SKIFT VÄNSTER
    printf("2. 8 << 1 = %d (8 = %08d)\n", 8 << 1);

    // Bitvis ELLER
    printf("3. 0 | 8 = %d\n", 0 | 8);

    // Logisk OCH
    printf("4. 31 && 0 = %d\n", 31 && 0);

    // Bitvis SKIFT VÄNSTER
    printf("5. 5 << 2 = %d\n", 5 << 2);

    // Logisk ELLER
    printf("6. 31 || 7 = %d\n", 31 || 7);

    // Bitvis OCH
    printf("7. 22 & 23 = %d\n", 22 & 23);

    // Bitvis ELLER
    printf("8. 0 | 1 = %d\n", 0 | 1);

    // Logisk ELLER
    printf("9. 0 || 22 = %d\n", 0 || 12);

    // Bitvis ANTINGEN ELLER
    printf("10. 17 ^ 8 = %d\n", 17 ^ 8);

    return 0;
}