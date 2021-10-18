#include <stdio.h>
int main(void)
{
    int langd, bredd , tjocklek,matt;
    printf("Ange paketets längd i mm\n: ");
    scanf("%d",&langd);
    printf("Ange paketets bredd i mm\n: ");
    scanf("%d", &bredd);
    printf("Ange paketets tjocklek i mm\n: ");
    scanf("%d", &tjocklek);
    matt=langd+bredd+tjocklek;
    if(matt<=900&&(langd>=140&&langd<=600)&&bredd>=90&&tjocklek<=100)
        printf("Måtten OK!");
    else
        printf("Måtten är felaktiga!");
    return 0;
}