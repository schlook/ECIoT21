#include <stdio.h>
#include <windows.h>
int main(void)
{
    printf("Om du använder å, ä eller ö kan det se konstigt ut!\a");
    Beep(600, 600);
    return 0;
}