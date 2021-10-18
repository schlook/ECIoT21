#include <stdio.h>
#include <stdlib.h>

int main(){
    int variables;
    float Array[] = {};
    printf("Amount of variables: ");
    scanf("%d", &variables);

    for(int i = 0; i < variables; i++){
        if(i = 0){
            Array[i] = 5.5;
        }
    Array[i] = Array[i - 1] + 5.5;
    }
    return 0;
}