#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    //Filpekare, FILE skrivs med stora bokstäver
    FILE *filpkr;
    //char
    char text [256];
    //här får filpekaren värdet av en ny textfil som skapas här,
    //ovning.txt och med komandot "w"-write kan vi skriva i filen
    filpkr=fopen("ovning.txt", "w");
    printf("Skriv din text:\n");
    scanf("%s", &text);
    fprintf(filpkr,"%s", text);
    //stänger filpekaren
    fclose(filpkr);
    return 0;
}