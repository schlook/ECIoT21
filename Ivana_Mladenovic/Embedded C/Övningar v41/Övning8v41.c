#include <stdio.h>
int main(void)
{
    //här sparas inmatning från användaren
    int antal=0;
    printf("Ange antal fält: ");
    scanf("%d", &antal);
    //sparad inmatning används som storlek på fältvariabel
    int felt[antal];
    for (int i = 0; i < antal; i++)
    {
        //För varje nytt varv får användaren mata in nytt nr
        printf("Ange ett nummer: ");
        //nummret sparas i fältvariabeln
        scanf("%d", &felt[i]);
    }
    printf("Nedan får du dina siffror i omvänd ordning:\n ");
    //i är lika med 'antal'-1(måste skrivas -1 för att räkna bort \0 sista tomma platsen 
    //annars räknas även den med och skrivs ut med siffran '32767'), 
    //i är större eller lika med 0, i minskar med 1
    for (int i = antal-1; i >= 0; i--)
    {
        printf("%d, ", felt[i]); 
    }
    
    
    return 0;
}