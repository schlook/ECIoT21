#include <stdio.h>
#include <stdlib.h>

int value = 1;

int main(){
    while (value >= 1 && value <= 2)
    {
        printf("%d\n", value);
        value++;
    }
    return 0;
}