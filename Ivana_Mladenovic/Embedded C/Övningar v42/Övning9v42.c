#include <stdio.h>
int main(void)
{
    // filpekaren
    FILE *filpkr;
    // char 
    char c[250];

    // Här öppnas filen från föregående uppgiften med "r"- read
    filpkr = fopen("ovning.txt", "r");

    if (!filpkr)
    {
        printf("filen finns inte!");
        return 0;
    }
    /*            NIKLAS TIPS
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
    fscanf(filpkr, "%s", &c);
    printf("Värde av c = %s", c);
    // filen stängs
    fclose(filpkr);
    return 0;
}