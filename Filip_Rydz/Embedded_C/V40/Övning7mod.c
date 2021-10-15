#include <stdio.h>
#include <ctype.h>

int main (void) {
    
    unsigned char dir;
    int i = 1;
    
    while (i < 10) {
        fflush(stdin);
        fflush(stdout);  
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
                       printf("%c", dir);
       
        i++;
    }
    return 0;
    
}
//ö = 246 Ö = 214