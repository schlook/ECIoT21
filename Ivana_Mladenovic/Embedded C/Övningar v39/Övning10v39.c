#include <stdio.h>
int main(void)
{   
    int val, tal1, tal2;
    printf("Välj mellan 1-4 i menyn: \n");
    printf("1. Addera\n");
    printf("2. Subtrahera\n");
    printf("3. Multiplicera\n");
    printf("4. Dividera\n");
    scanf("%d", &val);
    if(val==1)
    {
        printf("Skriv in två tal: ");
        scanf("%d%d", &tal1, &tal2);
        int add=tal1+tal2;
        printf("Summan är %d", add);
    }
    else if(val==2)
    {
        printf("Skriv in två tal: ");
        scanf("%d%d", &tal1, &tal2);
        int sub=tal1-tal2;
        printf("Summan är %d", sub);
    }
    else if(val==3)
    {
        printf("Skriv in två tal: ");
        scanf("%d%d", &tal1, &tal2);
        int mul=tal1*tal2;
        printf("Summan är %d", mul);
    }
    else if(val==4)
    {
       printf("Skriv in två tal: ");
        scanf("%d%d", &tal1, &tal2);
        int div=tal1/tal2;
        printf("Summan är %d", div); 
    }
    else
    {
        printf("Ogiltigt val! Välj ett val mellan 1 till 4!");
    }
    return 0;
}