#include <stdio.h>
//skapar en struct
struct student
{
 char förnamn[50];
 char efternamn[50];
} s[5];//deklarerar en fältvariabel med plats för 5 namn

int main(void)
{
    //deklarerar i variabeln som ska användas i for loopen
    int i;
    printf("-----Lägg in elever i klasslistan-----\n");
    //för i=0, i är mindr än 5, i ökar med 1
    for (int i = 0; i < 5; i++)
    {
        printf("Ange förnamn: ");
        scanf("%s", &s[i].förnamn);//sparar namn i fältvariabeln
        printf("Ange efternamn: ");
        scanf("%s", &s[i].efternamn);//sparar efternamn i fältvariabeln
    }
    printf("-----Skriver ut klasslistan-----\n");
    //för varje varv av 5 skriver ut förnamn och efternamn
    for (int i = 0; i < 5; i++)
    {
        printf("Förnamn: %s\t", s[i].förnamn);
        printf("Efternamn: %s\n", s[i].efternamn);
    }
    
    
    return 0;
}