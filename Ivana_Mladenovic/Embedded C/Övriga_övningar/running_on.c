#include <stdio.h>
#include <stdlib.h>//för att kunna anropa getenv
int main(void)
{
    printf("Running on ");
    printf(getenv("COMPUTERNAME"));
    return 0;
}