#include <stdio.h>

int main(void)
{
    int j; // variabeln för antal studenter
    printf("Hur många studenter vill du lägga till?\n");
    scanf("%d", &j);

    struct student
    {
        char fornamn[50];
        char efternamn[80];
    }s[j]; // antalet studenter, j = input   
    
    for (int i = 0; i < j; i++) // loopa och skriv in förnamn och efternamn
    {
        printf("Förnamn: ");
        scanf("%s", s[i].fornamn);
        printf("Efternamn: ");
        scanf("%s", s[i].efternamn);
        printf("\n");
    }
    for (int i = 0; i < j; i++) // loopar ut informationen
    {
        printf("Student %d: ", i + 1);
        printf("%s %s\n", s[i].fornamn, s[i].efternamn);
    }
    return 0;
}