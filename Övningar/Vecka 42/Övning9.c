#include <stdio.h>

int main()
{
    // filpekaren
    FILE *fp;
    // char 
    char c[250];

    // Öppnar för läsning (read)
    fp = fopen("ovning.txt", "r");

    if (!fp)
    {
        printf("filen finns inte!");
        return 0;
    }
    /*
    // Om du har flera strängar kan du använda dig av denna kod

    while (1)
    {
        c = fgetc(fp);
        if (feof(fp))
        {
            break;
        }
        // Använder int till char. Ja det går bra så länge tecknet finns.
        printf("%c", c);
    }
    */

    // kommentera ut nedan om du har längre strängar
    fscanf(fp, "%s", &c);
    printf("Värde av c = %s", c);
    // fram till hit
    fclose(fp);
    return 0;
}