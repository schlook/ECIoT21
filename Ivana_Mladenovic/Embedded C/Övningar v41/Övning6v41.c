#include <stdio.h>
int main(void)
{
    int antal;
    int dubblett;
    //variabel antal anv„nds som storlek p† f„ltvariabeln myFloat
    float myFloat[antal];
    printf("Ange antal f„lt: ");
    scanf("%d",&antal);
    
    for (int i = 0; i < antal; i++)
    {
        //i+1 f”r att f”rsta elementet inte ska visas som 0 f”r anv„ndaren 
        //%d visar d† 1 som f”rsta osv
        printf("Ange %d v„rde: ",(i+1));
        scanf("%f",&myFloat[i]);
    }
    for (int i = 0; i < antal; i++)
    {
        //j=i+1 
        for (int j = i+1; j < antal; j++)
        {
            if(myFloat[i]==myFloat[j])
            {
            dubblett ++;
            break;
            }
        }
        
    }
    printf("Du har %d dubbletter", dubblett);
    return 0;
}