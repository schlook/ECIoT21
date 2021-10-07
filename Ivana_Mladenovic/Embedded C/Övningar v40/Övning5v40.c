#include <stdio.h>
int main(void)
{
    int val;
    printf("Är du en kvinna eller man? Tryck 0 för kvinna och 1 för man!!");
    scanf("%d", &val);
    if(val==0)
    {
        printf("Du är en kvinna!");
    }
    else if(val==1)
    {
        printf("Du är een man!");
    }
    else
    printf("Ogiltigt val! Välj 0 för kvinna och 1 för man!");
    
    return 0;
}