#include <stdio.h>
#define STRL 3
int main(void)
{
    //Användaren skriver första gången
    int a[STRL][STRL];//skapar 2D fältvariabel
    //Användaren skriver andra gången
    int b[STRL][STRL];//skapar 2D fältvariabel
    //skapar en 2D för resultat
    int r[STRL][STRL];
    //Frågar användaren om inmatning
    printf("Mata in nummer i första matrisen 'a' %dx%d: \n", STRL,STRL);
    //rad
    for (int i = 0; i < STRL; i++)
    {   //kolumn
        for (int j = 0; j < STRL; j++)
        {
            scanf("%d", &a[i][j]);
        }  
    }
    printf("Mata i nummer för matrisen 'b' %dx%d: \n", STRL, STRL);
    //rad
    for (int i = 0; i < STRL; i++)
    {   //kolumn
        for (int j = 0; j < STRL; j++)
        {
            scanf("%d", &b[i][j]);
        } 
    }
    //Summering av alla fält i a och b
    for (int i = 0; i < STRL; i++)
    {
        for (int j = 0; j < STRL; j++)
        {
            r[i][j]=a[i][j]+b[i][j];
        } 
    }
    
    printf("Summan av matriser a+b= : ");
    for (int i = 0; i < STRL; i++)
    {
        for (int j = 0; j < STRL; j++)
        {
            printf("%d ", r[i][j]);
        }
        
    }
    printf("\n");
    return 0;
}