#include <stdio.h>

int main(void) {
    //användaren väljer operator:
    char op;
    printf("Vad vill du göra? +, -, * eller /\n");
    scanf("%c", &op);

    double tal1, tal2;
    printf("Skriv in två tal: \n");
    scanf("%lf%lf", &tal1, &tal2);

    switch (op) {
        case 43:
            printf("%.2lf + %.2lf = %.2lf\n", tal1, tal2, (tal1 + tal2));
            break;
        case 45:
            printf("%.2lf - %.2lf = %.2lf\n", tal1, tal2, (tal1 - tal2));
            break;
        case 42:
            printf("%.2lf * %.2lf = %.2lf\n", tal1, tal2, (tal1 * tal2));
            break;
        case 47:
            printf("%.2lf / %.2lf = %.2lf\n", tal1, tal2, (tal1 / tal2));
            break;
        default:
            printf("Felaktigt val!\nVälj mellan +, -, * eller /\n");
            break;
    }
    return 0;
}