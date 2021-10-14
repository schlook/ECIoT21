#include <stdio.h>

int main(void)
{
    int antal;
    float myFloat[antal];
    printf("Ange antal fält: ");
    scanf("%d", &antal);
    for (int i = 0; i < antal; i++)
    {
        if(i==0)
        myFloat[i]=5.5;
    
        if(i>0)
        myFloat[i]=myFloat[i-1]+5.5;
    }
    printf("Dina fält har fått följande värden: \n");
    for (int i = 0; i < antal; i++)
    {
        printf("myFloat[%d]=%.2lf\n", i, myFloat[i]);
    }
    
    return 0;
}