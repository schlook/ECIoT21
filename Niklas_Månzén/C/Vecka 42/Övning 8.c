#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

int main()
{
    char skrift[256];
    FILE *fp;
    fp = fopen("till8.txt", "w");

    printf("Write any sentence!\n : ");
    scanf("%s", &skrift);

    fprintf(fp, "%s", skrift);

    fclose(fp);

    return 0;
}