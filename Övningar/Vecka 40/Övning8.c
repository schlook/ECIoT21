#include <stdio.h>

int main(void)
{
    // Character op, +, -, * och / ligger inom 127
    char op;
    double tal1, tal2;
    printf("Skriv in din operator: \n");
    // scanf, scannar siffra/heltal
    // tilldelar värdet av variabel var's adress
    scanf("%c", &op);

    // Talen vi ska leta efter
    printf("Skriv in två tal:\n");
    scanf("%lf%lf", &tal1, &tal2);

    // Kan endast kontrollera EN variabel
    switch (op)
    {
        // Addition
        case '+':
            printf("%.2lf + %.2lf = %.2lf", tal1, tal2, (tal1 + tal2));
            break;
        // Subtraktion
        case '-':
            printf("%.2lf - %.2lf = %.2lf", tal1, tal2, (tal1 - tal2));
            break;
        // Multiplikation
        case '*':
            printf("%.2lf * %.2lf = %.2lf", tal1, tal2, (tal1 * tal2));
            break;
        // Division, går ej att dividera med 0! Om du inte gör denna kontroll så kommer det bli fel.
        // 47 = /
        // kolla upp ASCII-tabellen, finns i filer i Teams.
        // om du skulle ange både / och 47 kommer kompilatorn att säga:
        // duplicate case value
        // ...
        // previously used here
        case 47:
        // case '/':
            printf("%.2lf / %.2lf = %.2lf", tal1, tal2, (tal1 == 0) ? 0 : (tal1 / tal2));
            break;
        // Default, ungefär som else.
        default:
            printf("Du har angett fel val: %c är inte ett giltigt val", op);
            break;
    }
    return 0;
}