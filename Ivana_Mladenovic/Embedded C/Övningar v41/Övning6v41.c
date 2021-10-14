#include <stdio.h>
int main(void)
{
    int antal;
    int dubblett;
    
    printf("Ange antal f„lt: ");
    scanf("%d",&antal);
    //variabel antal anv„nds som storlek p† f„ltvariabeln myFelt
    int myFelt[antal];

    for (int i = 0; i < antal; i++)
    {
        //i+1 f”r att f”rsta elementet inte ska visas som 0 f”r anv„ndaren 
        //%d visar d† 1 som f”rsta osv
        printf("Ange %d v„rde: ",(i+1));
        scanf("%d",&myFelt[i]);
    }
    for (int i = 0; i < antal; i++)
    {
        //j=i+1 f”ratt kunna j„mf”ra i med f”reg†ende tal
        for (int j = i+1; j < antal; j++)
        {
            if(myFelt[i] == myFelt[j])
            {
                //r„knar antal ggr n„r i och j „r lika med varandra
                dubblett ++;
            }
        }
        
    }
    printf("Du har %d dubbletter totalt!", dubblett);
    return 0;
}