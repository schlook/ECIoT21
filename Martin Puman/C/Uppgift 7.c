#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char option;

int main(){
    printf("Choose a direction N,E,S,W: ");
    scanf("%c", &option);
    toupper(option);
    switch(toupper(option)){
        case 'N':
        printf("You chose North");
        break;
        case 'E':
        printf("You chose East");
        break;
        case 'S':
        printf("You chose South");
        break;
        case 'W':
        printf("You chose West");
        break;

        default:
        printf("That's not a valid direction!\n");
        main();


    }
}