#include <stdio.h>
#include <stdlib.h>

int enkelantal;
double enkelkostnad;

double kortkostnad;
int antalbesok;

double totalkostnad;


double enkelbiljet(){
    printf("Antal Enkel biljetter: ");
    scanf("%d",&enkelantal);
    printf("Kostnad per biljett: ");
    scanf("%lf", &enkelkostnad);
}

double arskort(){

    printf("Kostnad årskort: ");
    scanf("%lf",&kortkostnad);

}

int besok(){
    printf("Antal Besök: ");
    scanf("%lf", &antalbesok);
}

int main(){
    enkelbiljet();
    arskort();
    besok();
    totalkostnad = enkelantal * enkelkostnad;

    if(totalkostnad > kortkostnad){
        printf("Årskort är billigare!");
    }
    printf("Enkelbiljett är billigare! %2.2lfkr", totalkostnad);
    getchar();

}