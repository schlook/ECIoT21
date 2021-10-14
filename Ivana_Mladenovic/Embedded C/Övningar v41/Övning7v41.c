#include <stdio.h>
//funktion f”r utskrift
//tar emot f„ltvariabeln och dess l„ngd
void skrivUtFelt(int felt[], int lengd);
int main(void)
{
    int antal;
    printf("Ange antal f„lt: ");
    scanf("%d",&antal);
    int even[antal];
    int odd[antal];
    int countEven=0;
    int countOdd=0;
    for (int i = 1; i <= antal; i++)
    {
        //modulus f”r att kontrollera om det finns n†got restv„rde
        //om restv„rde finns sparas elementet i f„ltet f”r udda nummer
        if((i%2)==1)
        {
            odd[countOdd]=i;
            countOdd ++;
        }
        //finns det inget restv„rde sparas elementet i f„ltet f”r j„mna nr
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

// skriv ut f„lten
void skrivUtFelt(int felt[], int lengd)
{
    /// Skriver ut ett nummer f”r varje varv 
    for (int i = 0; i < lengd; i++)
    {
        printf("%d ", felt[i]);     
    }
    // separera med ny rad
    printf("\n");
}