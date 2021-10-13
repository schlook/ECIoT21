#include <stdlib.h>
#include <stdio.h>

char text[];

int main(){
    printf("Inmata text: ");
    scanf("%s", &text);
    printf("%s", text);
    _sleep(5);
}