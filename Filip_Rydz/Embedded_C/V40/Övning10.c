#include <stdio.h>

int rader = 10;
int main (void) {
    
    for (int i = 1; i <= rader; i++) {
        //ingen utskrift i första loopen
        //eftersom denna for befinner sig i föregående for-loop kan man anropa variabeln i
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}