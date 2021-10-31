#include <stdio.h>

int main(void)
{
    int tal1, tal2;
    printf("Vad är det första talet?\n");
    scanf("%d", &tal1);

    printf("Vad är det andra talet?\n");
    scanf("%d", &tal2);

    printf("Summa : %d\n", (tal1 + tal2));
    printf("Skillnad: %d\n", (tal1 - tal2));

    return 0;
}