#include <stdio.h>

int main(void)
{
    printf("1. 14 | 24 = %d\n", 14 | 24);

    printf("2. 8 << 1 = %ld (8 = %08d)\n", 8 << 1, 1000);

    printf("3. 0 | 8 = %d\n", 0 | 8);

    printf("4. 31 && 0 = %ld (%08d && %08d)\n", 31 && 0, 110001, 0);

    printf("5. 5 << 2 = %ld (5 = %08d)\n", 5 << 2, 101);

    printf("6. 31 || 7 = %d\n", 31 || 7);
    
    printf("7. 22 & 23 = %d\n", 22 & 23);

    printf("8. 0 | 1 = %d\n", 0 | 1);

    printf("9. 0 || 12 = %d\n", 0 || 12);
    
    printf("10. 17 ^ 8 = %d\n", 17 ^ 8); 
    
    return 0;
}