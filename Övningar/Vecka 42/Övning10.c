#include <stdio.h>

int main()
{
    // filpekaren
    FILE *fp;
    // char 
    char c[250];

    // Öppnar för läsning (read)
    fp = fopen("ovning.txt", "r");

    // Kollar om fp finns
    if (!fp)
    {
        printf("filen finns inte!");
        return 0;
    }

    fscanf(fp, "%s", &c);
    printf("Värde av c = %s\n", c);
    fclose(fp);

    // Börjar om med fp
    fp = fopen("ovning.txt", "w");
    printf("Skriv in nytt ord:\n");

    char nyttOrd[250];
    scanf("%s", &nyttOrd);

    fprintf(fp, "%s", &nyttOrd);

    printf("Skrev %s till ovning.txt", nyttOrd);
    fclose(fp);

    return 0;
}