#include <stdio.h>
// behövs för stricmp eller strcmp
#include <string.h>

// anger en max buffer för vårt ord.
#define BUF 100

int main(void)
{
    char str1[BUF], str2[BUF];
    printf("Skriv in första ordet:\n");
    scanf("%s", &str1);
    printf("Skriv in andra ordet:\n");
    scanf("%s", &str2);

    // Jämför inte stora och små bokstäver (engelska)
    // Samma sak som if (stricmp(str1, str2) == 0) { .. } om man föredrar det.
    if (!stricmp(str1, str2))
    {
        printf("Du skrev in samma ord\n");
    }
    else
    {
        printf("Du skrev inte in samma ord :(\n");
    }
    
    return 0;
}