#include <stdio.h>
#include <string.h>

struct klasslista
{
    char *förnamn;
    // 50 tecken räcker
    char efternamn[50];
    int ålder;
};

int main(void)
{
    struct klasslista klassLista;

    klassLista.förnamn = "Kalle";
    strcpy(klassLista.efternamn, "Hobbesson");
    klassLista.ålder = 12;

    printf("%s, %s är %d år gammal\n", klassLista.förnamn, klassLista.efternamn, klassLista.ålder);
    return 0;
}