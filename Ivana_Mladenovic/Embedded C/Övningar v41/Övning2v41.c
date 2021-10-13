#include <stdio.h>
void utskrift(void);
void inmatning(void);
char namn[20]={};
int main(void)
{
    inmatning();
    utskrift();
    return 0;
}
void inmatning(void)
{
    printf("Vad heter du?\n");
    scanf("%s", &namn);
}
void utskrift(void)
{
    printf("Ditt namn är %s", namn);
}