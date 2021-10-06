#include <stdio.h>

// Lite att leka med

// Denna lever genom hela programmet
// Kan inte ha initiering
extern int i;

int main()
{
<<<<<<< HEAD


    return 12;
=======
    // Denna lever endast i main();
    int i = 3;
    printf("%d", i);
}

void fun(void)
{
  printf("%d", i);
>>>>>>> f4090c58e80b92d424d18cc6d9476c5a6208e4b5
}

