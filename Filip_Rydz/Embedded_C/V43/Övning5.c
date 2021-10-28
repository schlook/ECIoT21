#include <stdio.h>

int main(void)
{
    enum färg {spader = 0, ruter = 10, hjärter = 20, klöver = 3};
    enum färg kort;
    int bytes = sizeof(kort);
    printf("%d\n", bytes);
    return 0;
}