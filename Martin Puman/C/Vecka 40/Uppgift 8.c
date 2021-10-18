#include <stdio.h>
#include <stdlib.h>

char c;
int firstnum;
int secondnum;

float answer;

int main(){
    printf("Pick a operator\n");
    printf("+\n-\n/\n*\n");
    scanf("%c", &c);
    printf("First number: ");
    scanf("%d", &firstnum);
    printf("Second number: ");
    scanf("%d", &secondnum);
    switch (c)
    {
    case '+':
        answer = firstnum + secondnum;
        printf("%.2f", answer);
        break;
    case '-':
        answer = firstnum - secondnum;
        printf("%.2f", answer);
        break;
    case '/':
        if(firstnum || secondnum == 0){
            printf("Can't divide with 0");
        }
        answer = firstnum / secondnum;
        printf("%.2f", answer);
        break;
    case '*':
        answer = firstnum * secondnum;
        printf("%.2f", answer);
        break;
    
    default:
        printf("That's not a valid operator");
        break;
    }
}