#include <stdio.h>
#include <stdlib.h>

int option;

int main(){
    printf("Choose a number 1-4: ");
    scanf("%d", &option);
    switch(option){
        case 1:
        printf("You chose number 1");
        break;
        case 2:
        printf("You chose number 2");
        break;
        case 3:
        printf("You chose number 3");
        break;
        case 4:
        printf("You chose number 4");
        break;

        default:
        printf("That's not a valid number!");
        main();


    }
}