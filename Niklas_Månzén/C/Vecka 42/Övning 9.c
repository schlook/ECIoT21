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
        printf("Could not open the file you are looking for...");
        return 0;
    }

    fscanf(fp, "%s", &skrift);
    printf("You wrote : %s in the till8.txt file!",skrift);

    fclose(fp);

    return 0;
}