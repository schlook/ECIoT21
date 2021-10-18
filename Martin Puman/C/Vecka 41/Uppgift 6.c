#include <stdio.h>
#include <stdlib.h>

int main(){
    int antal;
    printf("Hur många variabler?: ");
    scanf("%d", &antal);
    int array[antal];
    for(int i = 0; i < antal; i++){
        printf("Värde?: ");
        scanf("%d", array[i]);
    }
    

}