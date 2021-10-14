#include <stdio.h>
int main(void)
{
    int antal;
    int dubblett;
    
    printf("Ange antal fält: ");
    scanf("%d",&antal);
    //variabel antal används som storlek p† fältvariabeln myFelt
    int myFelt[antal];

    for (int i = 0; i < antal; i++)
    {
        //i+1 för att första elementet inte ska visas som 0 för användaren 
        //%d visar då 1 som första osv
        printf("Ange %d v„rde: ",(i+1));
        scanf("%d",&myFelt[i]);
    }
    for (int i = 0; i < antal; i++)
    {
        //j=i+1 för att kunna jämföra i med föregående tal
        for (int j = i+1; j < antal; j++)
        {
            if(myFelt[i] == myFelt[j])
            {
                //räknar antal ggr när i och j är lika med varandra
                dubblett ++;
            }
        }
        
    }
    printf("Du har %d dubbletter totalt!", dubblett);
    return 0;
}