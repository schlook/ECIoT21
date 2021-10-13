#include <stdio.h>
#include <stdlib.h>

double function(){
    double value = 13.37;

    return value;
}

int main(){
    printf("%2.2f", function());
    return 0;
}