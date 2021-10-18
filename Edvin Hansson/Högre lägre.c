#include <stdio.h>
#include <stdlib.h>


int main(){

    int secretNumber = 1;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    printf("Player 1 enter a number between 1-10\n");
    scanf("%d", &secretNumber);

    while(guess != secretNumber && outOfGuesses ==0){
        if(guessCount <  guessLimit){
            printf("Player 2 guess a number:");
            scanf("%d", &guess);
            guessCount++;
                if(guess < secretNumber){
                    printf(" Guess higher!\n");

                } else if(guess > secretNumber){
                    printf(" Guess lower!\n");

                        }


        } else {
            outOfGuesses =1;
            
        }

        }
    if(outOfGuesses == 1){
        printf("Out of guesses\n");
    } else{   
        printf("You Win!\n");
    }    
    
    system("pause");
    return 0;
}