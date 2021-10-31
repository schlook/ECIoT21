#include <stdio.h>
#include <string.h>

#define BUF 100

int main(void)
{
    char word1[BUF], word2[BUF];
    printf("Type a word:\n");
    scanf("%s", word1);
    printf("One more word:\n");
    scanf("%s", word2);

    if (!strcmp(word1, word2))
    {
        printf("They match!\n");
    }
    else
    {
        printf("They dont match!\n");
    }
    return 0;
}
