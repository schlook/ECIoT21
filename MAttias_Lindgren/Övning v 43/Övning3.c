#include <stdio.h>

#define PI 3.1415

void konvHeltal(void);
void konvFlytal(void); 
float ReturnerarFloat(int heltal);
long long int ReturneraTal(int flytal);

int main (void)
{
    konvHeltal();
    konvFlytal(); 

    printf("%f\n",ReturnerarFloat);
    
    printf("%lld\n", ReturneraTal);
    return 0; 
}

void konvHeltal()
{
    int mittHeltal = 40 ;
    printf("PI * %d = %d\n", mittHeltal, (PI * mittHeltal));

    printf("PI * %f = %f\n", (float) mittHeltal, (PI * (float)mittHeltal));

    printf("PI * %d = %f\n", mittHeltal,(PI * (float)mittHeltal));
}
void konvFlytal()
{   
    int Flytal;
    printf("%d blir %lld\n", Flytal);
}

float ReturnerarFloat(int Heltal)
{
    return (float)Heltal;
}
long long int ReturneraTal(int Flytal)
{
    return (float)Flytal ; 
}