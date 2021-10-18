#include <stdio.h>
#include <ctype.h>

int main (void) {
    
    unsigned char dir;
    printf("Åt vilket håll vill du gå? N, S, V eller Ö:\n");
    scanf("%c", &dir);
    //konvertera till versaler
    
    switch (toupper(dir)) {
        case 'N':
            printf("Du går norrut\n");
            break;
        case 'S':
            printf("Du reser söderut\n");
            break;
        case 'V':
            printf("Du promenerar västerut\n");
            break;
        //ö och Ö från ASCI-table. 
        case 214:
        case 246:
            printf("Du vandrar österut\n");
            break;
        default:
            printf("Återvändsgränd. Ta från början och försök igen..\n");
            break;
    }
    return 0;
}
//ö = 246 Ö = 214