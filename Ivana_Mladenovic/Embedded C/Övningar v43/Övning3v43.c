#include <stdio.h>
#define PI 3.1415
int konverteraHeltal();
char konverteraTecken();
double returneraTal();
char returneraTecken();
int main()
{
    konverteraHeltal();
    konverteraTecken();
    printf("%f\n", returneraTal(56));
    //Ska ta emot ett tal från ASCII-tabellen och returnera ett tecken
    printf("%c", returneraTecken(168));
    return 0;
}
int konverteraHeltal()
{
    int heltal=5;
    //Innan konverteringen blir resultatet felaktigt, 
    //då vi tappar värdet från float till int
    printf("PI * %d = %d\n", heltal, (heltal*PI));
    //Efter konverteringen blir det rätt
    printf("PI * %f = %f\n", (float)heltal, ((float)heltal*PI));
}
char konverteraTecken()
{
    int c=142;
    printf("Hej V%dRLDEN!\n", c);
    printf("Hej V%cRLDEN!\n", (char)c);
}
//funktionen ska ta emot ett heltal och returnera ett flyttal, 
//explicit konvertering
double returneraTal(int tal)
{
    return (float)tal;
}
//funktionen ska ta emot ett heltal och returnera ett tecken,
//explicit konvertering
char returneraTecken(int tecken)
{
    return (char)tecken;
}