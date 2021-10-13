#include <stdlib.h>
#include <stdio.h>


int main(){
    int i;
    for (i = 0; i <= 15; i++){

        if(i == 0 || i == 5 || i == 10){
            printf("Baby Shark ");
        }
        if(i == 4 || i == 9 || i == 14){
            printf("\n");
        }
        printf("Do ");
    }

}