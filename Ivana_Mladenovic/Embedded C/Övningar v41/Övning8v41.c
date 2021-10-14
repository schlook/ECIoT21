#include <stdio.h>
int main(void)
{
    //h„r sparas inmatning fr†n anv„ndaren
    int antal=0;
    printf("Ange antal f„lt: ");
    scanf("%d", &antal);
    //sparad inmatning anv„nds som storlek p† f„ltvariabel
    int felt[antal];
    for (int i = 0; i < antal; i++)
    {
        //F”r varje nytt varv f†r anv„ndaren mata in nytt nr
        printf("Ange ett nummer: ");
        //nummret sparas i f„ltvariabeln
        scanf("%d", &felt[i]);
    }
    printf("Nedan f†r du dina siffror i omv„nd ordning:\n ");
    //i „r lika med 'antal'-1(m†ste skrivas -1 f”r att r„kna bort \0 sista tomma platsen 
    //annars r„knas „ven den med och skrivs ut med siffran '32767'), 
    //i „r st”rre eller lika med 0, i minskar med 1
    for (int i = antal-1; i >= 0; i--)
    {
        printf("%d, ", felt[i]); 
    }
    
    
    return 0;
}