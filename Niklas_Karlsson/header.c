#include <stdio.h>

// Lite att leka med

// Denna lever genom hela programmet
// Kan inte ha initiering
extern int i;

int main()
{
    // Denna lever endast i main();
    int i = 3;
    printf("%d", i);
}

void fun(void)
{
  printf("%d", i);
}

