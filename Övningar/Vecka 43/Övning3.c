#include <stdio.h>

#define PI 3.1415
// Typkonvertering på två olika vis.
void konverteraHeltal(void);
void konverteraTecken(void);
float returneraFloat(int heltal);
char returneraTecken(int tecken);

int main(void)
{
    // Konvertera
    konverteraHeltal();
    konverteraTecken();

    printf("%f\n", returneraFloat(22));
    printf("%c\n", returneraTecken(65));

    return 0;
}

void konverteraHeltal(void)
{
    int mittHeltal = 3;
    // Blir 274877907.. hur kan de bli det?
    // För att vi tappar värde från double/float till heltal, konvertering blir knasig.
    printf("PI * %d = %d\n", mittHeltal, (PI * mittHeltal));
    // Om vi istället typkonverterar (typecast) så blir det rätt:
    printf("PI * %f = %f\n", (float)mittHeltal, (PI * (float)mittHeltal));

    // Kan fortsätta använda vårt heltal nu, som är oförändrat
    // det konverteras enbart tillfälligt där vi säger åt den att konverteras.
    printf("PI * %d = %f\n", mittHeltal, (PI * (float)mittHeltal));
}

void konverteraTecken(void)
{
    int tecken;
    printf("Skriv ett tecken i siffror (hämtat från ASCII-tabellen):\n");
    scanf("%d", &tecken);

    printf("%d blir %c\n", tecken, tecken);
}

float returneraFloat(int heltal)
{
    return (float)heltal;
}

char returneraTecken(int tecken)
{
    return (char)tecken;
}