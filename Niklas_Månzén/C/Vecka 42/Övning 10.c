#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

int main()
{
    char skrift[256];
    FILE *fp;

    fp = fopen("till8.txt", "r");

    if(fp == NULL)
    {
        printf("Could not open the file you are looking for...\n");
        return 0;
    }

    fscanf(fp, "%s", &skrift);
    printf("The string is currently : ''%s'' from the till8kopia.txt file...\n",skrift);

    fclose(fp);

    fp = fopen("till8.txt", "w");
    char detNya[256];

    printf("Write any new sentence to replace it\n : ");
    scanf("%s", &detNya);

    fprintf(fp, "%s", detNya);
    printf("The string is now : %s in the till8.txt file!\n",detNya);
    fclose(fp);

    return 0;
}