#include <stdio.h>
// För strlen (längden på en sträng)
#include <string.h>
void erPalindrom(char str[]);

// main
int main()
{
    char palin[1];
    printf("Skriv in ett ord som du tror är palindrom:\n");
    // Loopar för evit
    while (scanf("%s", &palin) == 1)
    {
        erPalindrom(palin);
        // ser till så vi loopar för evigt
        fflush(stdin);
        printf("\nSkriv in ett ord som du tror är palindrom:\n");
    }
    return 0;
}

// Går bra att passa strängar till 
void erPalindrom(char str[])
{
    // Startar längst åt vänster av sträng
    int v = 0;
    // Startar längst åt höger, minus "end of character"-tecknet \0
    int h = strlen(str) - 1;

    // Fortsätt jämför tecken medan de är samma
    while (h > v)
    {
        // Kontrollerar vänster med höger (tills de möts på mitten)
        if (str[v++] != str[h--])
        {
            printf("%s är inte ett palindrom\n", str);
            return;
        }
    }
    printf("%s är ett palindrom\n", str);
}