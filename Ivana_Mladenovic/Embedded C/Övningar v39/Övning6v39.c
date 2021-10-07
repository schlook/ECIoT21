#include <stdio.h>
int main(void)
{
    int a,b;
    printf("Skriv in 2 tal: \n");
    scanf("%d%d", &a, &b);
    printf("Dina valda tal är %d och %d\n", a, b);
    int summa= a+b;
    int skillnad=a-b;
    printf("Summan av dessa tal är %d och mellanskillnaden är %d", summa, skillnad);
    return 0;
}