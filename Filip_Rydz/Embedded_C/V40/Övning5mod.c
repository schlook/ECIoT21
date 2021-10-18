#include <stdio.h>


_Bool controlSex(_Bool sex, long long int pnr);
_Bool controlSex2(_Bool sex, long long int pnr);
//void ger ingen return, men int gör
void printPersonnummer(void);



//main
int main(void) {
    //måste anropas en gång från main()
    printPersonnummer();
    return 0;
}

//skriv ut frågorna
void printPersonnummer(void) {
    //Sex = Kön
    int sex;
    //personnummer
    long long int nr;
    //fråga om kön
    printf("Kvinna (0) eller Man (1)?: \n");
    scanf("%d", &sex);

    printf("Ditt personnummer (utan bindesstreck): \n");
    scanf("%lld", &nr);

    if (!controlSex2(sex, nr)) {
        
        //rensa ur tidigare inmatingar
        fflush(stdin);
        fflush(stdout);
        printf("Kön och personnummer stämmer inte!\n");
        printPersonnummer();
    } else 
        printf("Kön och personnummer stämmer överens!\n");
}

_Bool controlSex(_Bool sex, long long int pnr) {

    if (((sex == 0) && ((pnr % 2) == 0)) || ((sex == 1) && ((pnr % 2) == 1))) {
        return 1;
    }
    return 0;
}

_Bool controlSex2(_Bool sex, long long int pnr) {

    pnr /= 10;
    return (((sex == 0) && ((pnr % 2) == 0)) || ((sex == 1) && ((pnr % 2) == 1)));
}

