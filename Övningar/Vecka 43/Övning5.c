#include <stdio.h>

typedef enum färg
{
    spader = 0,
    ruter = 10,
    hjärter = 20,
    klöver = 3
} kort;

int main(void)
{
    printf("Size of enum variable = %d bytes", sizeof(kort));
    return 0;
}