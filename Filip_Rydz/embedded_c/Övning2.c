#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Din dator heter: ");
    printf(getenv("ComputerName"));
    printf("\n");
}