#include <stdio.h>
//funktion för utskrift
//tar emot fältvariabeln och dess längd
void skrivUtFelt(int felt[], int lengd);
int main(void)
{
    int antal;
    printf("Ange antal fält: ");
    scanf("%d",&antal);
    int even[antal];
    int odd[antal];
    int countEven=0;
    int countOdd=0;
    for (int i = 1; i <= antal; i++)
    {
        //modulus för att kontrollera om det finns något restvärde
        //om restvärde finns sparas elementet i fältet för udda nummer
        if((i%2)==1)
        {
            odd[countOdd]=i;
            countOdd ++;
        }
        //finns det inget restvärde sparas elementet i fältet för jämna nr
        else
        {
            even[countEven]=i;
            countEven++;
        }
        
    }
    printf("J„mna : "); 
    skrivUtFelt(even, countEven);
    printf("Udda : ");  
    skrivUtFelt(odd, countOdd);
    return 0;
}

// skriv ut fälten
void skrivUtFelt(int felt[], int lengd)
{
    /// Skriver ut ett nummer för varje varv 
    for (int i = 0; i < lengd; i++)
    {
        printf("%d ", felt[i]);     
    }
    // separera med ny rad
    printf("\n");
}