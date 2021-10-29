#include <stdio.h>
// ctype.h behövs för toupper()-funktionen
#include <ctype.h>

int main(void)
{
    // Val av datatypen tecken. (char går från -127 till +127)
    // unsigned char går från 0 till 255
    // Ö ligger på 153 så vi kan inte använda oss av vanlig char

    unsigned char val;
    printf("Skriv in ditt val: \n");
    // scanf, scannar siffra/heltal
    // tilldelar värdet av variabel var's adress
    scanf("%c", &val);

    // Kan endast kontrollera EN variabel
    // Switch är skiftlägeskänslig.
    // Det vill säga skriver du in stor bokstav i kontrollen
    // Så måste även användaren skriva in stor bokstav.
    // omvandlar vad som än inkommer till stora bokstäver
    // Du kan så klart vända på det och leta efter små bokstäver.
    // Men då måste case kontrollera små bokstäver.
    switch (toupper(val))
    {
        // Letar efter tecken 'A' (stort A)
        // När det gäller tecken måste enkel citation användas.
        case 'N':
            printf("Du går norrut.\n");
            break;
        // Letar efter tecken 'S' (stort S)
        case 'S':
            printf("Du reser söderut.\n");
            break;
            // Letar efter tecken 'V' (stort V)
        case 'V':
            printf("Du promenerar västerut\n");
            break;
        // Samma som 'Ö' men använder ASCII-numret
        // ö och Ö går inte att koda om till "upper"
        // för att lösa det måste vi separat använda oss av ö och Ö
        // Anledning att jag inte använder 'ö' är för att kompilatorn klagar:
        // warning: multi-character character constant [-Wmultichar]
        // case '├Â':
        case 148:
        case 153:
            printf("Du vandrar österut\n");
            break;
        // Default, ungefär som else.
        default:
            printf("Du har angett fel val: %c är inte ett giltigt val", val);
            break;
    }
    return 0;
}