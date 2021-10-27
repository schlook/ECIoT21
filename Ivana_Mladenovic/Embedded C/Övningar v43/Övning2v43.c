#include <stdio.h>
//typdefinition
typedef int heltal;
typedef char tecken;
tecken utskrift(void);
heltal talfoljd(void);
//MAIN
heltal main(void)
{
    utskrift();
    talfoljd();
    return 0;
}
//talföljd funktion
heltal talfoljd(void)
{
    for(heltal i=1; i<11; i++)
    {
        printf("%d\n", i);
    }
}
//utskrift funktion
tecken utskrift()
{
    tecken A=142;
    printf("HEJ V%cRLDEN!!\n", A);
}