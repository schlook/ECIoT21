#include <stdio.h>

int main(void) {
    //be om ett val
    int val;
    printf("Välj ett värde mellan 1 och 4\n");
    scanf("%d", &val);

    switch (val) {

        case 1:
            printf("Du har valt 1\n");
            break;
        case 2:
            printf("Du har valt 2\n");
            break;
        case 3:
            printf("Du har valt 3\n");
            break;
        case 4:
            printf("Du har valt 4\n");
            break;
        default:
            printf("Felaktigt val\n");
            break;
    }
    return 0;
}