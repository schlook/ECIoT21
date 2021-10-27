#include <stdio.h>
int main(void)
{
    //hÃ¤r sparas inmatning frÃ¥n anvÃ¤ndaren
    int antal=0;
    printf("Ange antal fÃ¤lt: ");
    scanf("%d", &antal);
    //sparad inmatning anvÃ¤nds som storlek pÃ¥ fÃ¤ltvariabel
    int felt[antal];
    for (int i = 0; i < antal; i++)
    {
        //FÃ¶r varje nytt varv fÃ¥r anvÃ¤ndaren mata in nytt nr
        printf("Ange ett nummer: ");
        //nummret sparas i fÃ¤ltvariabeln
        scanf("%d", &felt[i]);
    }
    printf("Nedan fÃ¥r du dina siffror i omvÃ¤nd ordning:\n ");
    //i Ã¤r lika med 'antal'-1(mÃ¥ste skrivas -1 fÃ¶r att rÃ¤kna bort \0 sista tomma platsen 
    //annars rÃ¤knas Ã¤ven den med och skrivs ut med siffran '32767'), 
    //i Ã¤r stÃ¶rre eller lika med 0, i minskar med 1
    for (int i = antal-1; i >= 0; i--)
    {
        printf("%d, ", felt[i]); 
    }
    
    
    return 0;
}