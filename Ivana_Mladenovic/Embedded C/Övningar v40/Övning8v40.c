#include <stdio.h>
int main(void)
{
    char val;
    double tal1, tal2;
    printf("Vad vill du göra? Gör ditt val: +, -, * eller /");
    scanf("%c", &val);
    printf("Skriv in 2 tal: \n");
    scanf("%lf%lf", &tal1, &tal2);
    switch (val)
    {
    case '+':
        double summa=tal1+tal2;
        printf("Summan är %.2lf", summa);
        break;
    case '-':
        double differens=tal1-tal2;
        printf("Differensen är %.2lf", differens);
    case '*':
        double produkt=tal1*tal2;
        printf("Produkten är %.2lf", produkt);
    //case '/':
    case 47:printf("Summan är %n", summa);
        double kvot=tal1/tal2;
        printf("Kvoten är %.2lf", kvot);
    default:
        printf("Ogiltigt val!");
        break;
    }
    return 0;
}