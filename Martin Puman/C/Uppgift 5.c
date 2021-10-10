#include <stdlib.h>
#include <stdio.h>

long long int personnummer;
int kon;


_Bool KontrolleraKon(int kon, long long int personnummer){
    personnummer /= 10; //Tar bort sista numret
    personnummer %= 2;
    if(personnummer == 1 && kon == 1 || personnummer == 0 && kon == 0){
        return 1;
    }
    return 0;
}

int main(){
    //long int test = 200102105293 / 10;
    //printf("%li", test);
    printf("Are you a man or a women?\n0. Women\n1. Man\n");
    scanf("%d", &kon);
    printf("Personnummer?: ");
    scanf("%lli", &personnummer);
    if(KontrolleraKon(kon, personnummer)){
        printf("Success!");
    }
    else{
        printf("That doesn't seem right, try again\n");
        main();
    }
}