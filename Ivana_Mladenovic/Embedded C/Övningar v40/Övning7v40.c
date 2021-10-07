#include <stdio.h>
//för att kunna använda toupper eller tolower behövs ctype.h
#include <ctype.h>
int main(void)
{
    unsigned char val;
    printf("Gör ett val i kompassen (N, S, V, Ö)");
    scanf("%c", &val);
    //toupper omvandlar valet till alla stora bokstäver
    switch (toupper(val))
    {
    case 'N':
        printf("Du går norrut!");
        break;
    case 'S':
        printf("Du reser södrut!");
        break;
    case 'V':
        printf("Du promenerar västerut!");
        break;  
    //case 'Ö': använder ASCII-nummer för Ö och ö
    //toupper funkar inte med ö
    case 148:
    case 153:
        printf("Du vandrar österut!");
        break;     
    default:
        printf("Du har gjort fel val! Försök igen (N, S, V, Ö)!");
        break;
    }