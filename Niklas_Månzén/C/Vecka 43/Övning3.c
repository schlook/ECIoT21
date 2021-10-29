#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

#define PI 3.1415

void konvertera()
{
    int num;
    printf("OK...skriv en siffra!\n:");
    scanf("%d", &num);
    printf("%d blir Char: %c !\n", num, num); //namnam! 
}

float returneraFloat(int B)
{
    return (float)B;
}

char returneraChar(int A)
{
    return (char)A;
}

int main(void)
{
    int heltal = 15;

    printf("Heltal %d som * med heltal-PI ..D..D..\n= %d\n", heltal, (PI * heltal)); // Weird!
    Sleep(500);
    printf("Flyttal %f som * med flyttal-PI ..F..F\n= %f\n", (float) heltal, (PI * (float)heltal));
    Sleep(500);
    printf("Heltal %d som * flyttal-PI ..D..F\n= %f\n", heltal, (PI * (float)heltal));
    Sleep(500);

    konvertera();

    Sleep(1000);
    printf("And here comes the boom!\n");
    Sleep(1000);
    printf("Passar heltal 13 till Float-retur-funktion som har INT-Argument : %2f\n",returneraFloat(13));
    printf("Passar heltal 63 till Char-retur-funktion som har INT-Argument : %c\n",returneraChar(63));

    return 0;
}