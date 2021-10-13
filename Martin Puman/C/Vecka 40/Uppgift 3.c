#include <stdlib.h>
#include <stdio.h>
int i = 1;
int main(){
    while(i <= 3){
        printf(".");
        i++;
        Sleep(250);
    }
    while(i >= 3 && i <= 6){
        printf("-");
        i++;
        Sleep(500);
    }
    while(i >= 6 && i <= 9){
        printf(".");
        i++;
        Sleep(250);
    }

}