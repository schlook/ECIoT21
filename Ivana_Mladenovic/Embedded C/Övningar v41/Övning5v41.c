#include <stdio.h>

int main(void)
{
    int antal;
    float myFloat[antal];
    printf("Ange antal f„lt: ");
    scanf("%d", &antal);
    for (int i = 0; i < antal; i++)
    {
        if(i==0)
        myFloat[i]=5.5;
    
        if(i>0)
        myFloat[i]=myFloat[i-1]+5.5;
    }
    printf("Dina f„lt har f†tt f”ljande v„rden: \n");
    for (int i = 0; i < antal; i++)
    {
        printf("myFloat[%d]=%.2lf\n", i, myFloat[i]);
    }
    
    return 0;
}