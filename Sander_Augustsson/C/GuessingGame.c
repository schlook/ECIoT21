#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
    int SecretNumber;
    int guess;
    int gameover=0;
    int chancelimit=4;
    int sek=0;
    srand(time(NULL)); // Använder tiden för att komma upp med random nummer annars blir det samma nummer varje gång
    SecretNumber=rand() % 16;// gör att rand blir mellan 0 och 15
    
    int chances=0;
printf("Try to guess the random number between 0 and 15, You got 4 guesses\n");

    while(guess != SecretNumber && gameover == 0) // Om det gissade numret inte är = hemliga numret OCH gamveover inte 1 kör
    {   
        if(chances<chancelimit)
        {
            sleep(1);
            scanf("%d",&guess);
            chances++;
         if(guess < SecretNumber)
            {
                sleep(1);
                printf("The Secret Number is Higher, You got %d guesses left\n", chancelimit-chances);
            }

            else if(guess > SecretNumber)
            {
                sleep(1);
             printf("The Secret Number is lower, You got %d guesses left\n", chancelimit-chances);
            }
        }else
        {
            gameover=1;
        }

    }

    //stänger av spelet efter while loopen räknat till 3
        if(gameover == 1)
        {
            sleep(1);
            printf("Seems like you ran out of guesses, system will self destruction in:\n");
            sleep(3);
            while(sek <=3)
            {
                printf("    %d\n",3-sek);
                sek++;
                sleep(1);
            }
            printf("\n!System offline, restart to try again");
            sleep(3);
            exit(0);
        }
        else
        {
            printf("WOHOOOOO you guessed the correct number!!!!");
            sleep(5);
            printf("\nBye");
            sleep(1);


        }
    
    return 0;
}
