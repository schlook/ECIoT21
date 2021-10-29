#include <stdio.h>

struct student
{
    char förnamn[50];
    char efternamn[50];
} s[5];

int main()
{
    int i;
    printf("Skriv in information om klasskamrater:\n");

    // storing information
    for (i = 0; i < 5; ++i)
    {
        printf("Skriv in förnamn:\n");
        scanf("%s", s[i].förnamn);
        printf("Skriv in efternamn:\n");
        scanf("%s", s[i].efternamn);
    }
    printf("Visar information:\n\n");

    // Visar information
    for (i = 0; i < 5; ++i)
    {
        printf("Förnamn:");
        printf("%s \n", s[i].förnamn);
        printf("Efternamn: ");
        printf("%s \n", s[i].efternamn);
        printf("\n");
    }
    return 0;
}