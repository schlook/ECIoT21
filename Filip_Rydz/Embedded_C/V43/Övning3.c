#include <stdio.h>
#include <stdlib.h> // för att vi vill kunna använda exit(0); dvs stäng program

#define PI 3.141592653589793

// funktioner för uträkning och konvertering
void multiPiInt(int numInt);
void multiPiFloat(float numFloat);
void konvertIntChar(void); // konverterar en int i funktionen

// return funktioner
float returnFloat(int numInt); // tar emot argumentet 'numInt' och returnerar 'float' genom implicit typkonvertering
char returnChar(int numInt); // tar emot argumentet 'numInt' och returnerar 'char' genom implicit typkonvertering

int main(void)
{

    int numInt;
    float numFloat;
    printf("Type a number you want to multiply with PI: (integer)\n");
    // här initieras variablen numInt
    scanf("%d", &numInt);

    printf("\nNow, type a new number you want to multiply with PI: (float)\n");
    scanf("%f", &numFloat);

    multiPiInt(numInt); // anropar funktionen med numInt som argument
    multiPiFloat(numFloat);
    konvertIntChar();
    
    printf("\nReturn float: %f\n", returnFloat(numInt));
    // om numInt är satt lägre än 33 kommer inte typkonvertering till tecken så då tecken i ASCII börjar först på 33 och >
    if (numInt < 33) // 1 tom 32 är control characters
    {
        printf("\nInteger set to low! Set higher then 32 if you want to implicit converter from int to char..\n");
        exit(0);
    }
    else // om numInt är satt till 33 och upp körs programmet som vanligt
    {
    printf("Return char: %c\n", returnChar(numInt));
    }

    return 0;
}
void multiPiInt(int numInt)
{
    int resultInt = numInt * PI;
    printf("\n%d * PI = %f\n", numInt, numInt * PI); // implicit typkonvertering, 2a %d = %f
}
void multiPiFloat(float numFloat)
{
    float resultFloat = numFloat * PI;
    printf("%f * PI = %f\n", numFloat, resultFloat); // endast floats
}
void konvertIntChar(void)
{
    int tecken;
    printf("\nType an int that you would like to convert to char:\n");
    scanf("%d", &tecken);
    if (tecken < 33)
    {
        printf("\nInteger set to low! Set higher then 32 if you want to implicit converter from int to char..\n");
        exit(0);
    }
    else
    {
    printf("\nint: %d becomes char: %c\n", tecken, tecken); // tar int från 'int tecken' och typkonverterar med implicit typkonvertering genom '%c'
    }
}
float returnFloat(int numInt)
{
    printf("Our return-functions:");
    return (float)numInt; // konverterar 'int numInt' till float (implicit typkonvertering)
}
char returnChar(int numInt)
{
    return (char)numInt; // konverterar 'int numInt' till char
}