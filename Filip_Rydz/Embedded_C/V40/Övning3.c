#include <stdio.h>
#include <unistd.h>

int main(void) 
{
    
    char s = '.', o = '-';
    
    while (1) 
    {
        for (int i = 1; i <= 3; i++) 
        {
            printf("%c", s);
            usleep(500000);
            fflush(stdout);
        } 

        for (int j = 1; j <= 3; j++) 
        {
            printf("%c", o);
            usleep(1000000);
            fflush(stdout);
        } 

        for (int k = 1; k <= 3; k++) 
        {   
            printf("%c", s);
            usleep(500000);
            fflush(stdout);
        }
        printf(" / ");
        usleep(2000000);
    }
    return 0;
}