#include <stdio.h>
#include <windows.h>
#define BUF 100
int main(void)
{
    char text[BUF];
    printf("Skriv något: ");
    char *p = text;
    scanf("%s", &(*p));
    int reknare=0;
    for (int i = 0; i <= text[i] ; i++)
    {
        reknare++;
    }
    printf("Strängen '%s' är %d tecken lång!", text, reknare);
    Sleep(1000);
    return 0;
}