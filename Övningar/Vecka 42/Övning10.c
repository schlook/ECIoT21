#include <stdio.h>
#include <string.h>

int main()
{
    // char
    char buff[255], nyttOrd[255];
    // filpekaren
    FILE *fp;

    // Öppnar för läsbarhet och skrift, men rensar inte innehållet i nuvarande fil
    fp = fopen("ovning.txt", "r+");

    // Kollar om fp finns
    if (!fp)
    {
        printf("filen finns inte!");
        return 0;
    }
    // Läs filen
    fscanf(fp, "%s", buff);
    printf("Ordet i ovning.txt: %s\n", buff);

    // Ta bort nedan rad om du vill lägga till ord,
    // w+ rensar filen och skriver in nytt ord.
    // annars fylls ordet du nyss skrev på i filen.
    fp = fopen("ovning.txt", "w+");
    printf("\nSkriv in nytt ord:\n");
    scanf("%s", &nyttOrd);
    fprintf(fp, "%s", &nyttOrd);
    fclose(fp);
    
    printf("Skrev %s till ovning.txt", nyttOrd);

    return 0;
}