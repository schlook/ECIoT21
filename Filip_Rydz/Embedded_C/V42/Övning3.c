#include <stdio.h>
#include <stdlib.h> // inkluderar standardbiblioteket för att kunna använda exit(0);

#ifdef _WIN32
#include <windows.h>

// mySleep blir som ett alias för Sleep (på win)
#define mySleep(x) Sleep(x)

#else
// allt annat förutom windows

#include <unistd.h>

#define mySleep(x) usleep(x * 10000); //microsecs * 10 000 = (100 = 1sec)
#define MAX_LISTA 256
#endif

void meny(); // Meny-funktion
void addMate(); // funktion för att lägga till klasskamrat
void showList(); // funktion för att lista klasskamraterna
// globala fältvariabler, Förnamn och Efternamn. Lämnas tomma nu för att fyllas med funktionen
char fNamn[MAX_LISTA][MAX_LISTA]; // begränsade till 256 tecken
char eNamn[MAX_LISTA][MAX_LISTA];
int antal; // antalet i listan. global för att kunna anropas från olika funktioner

int main(void)
{
    printf("Välkommen till klass IoT21!\n");
    mySleep(200); // vänta 2 sekunder
    fflush(stdout); // flusha usleep annars följer den med till nästa usleep
    printf("\n");
    meny();
    return 0;
}
void meny(void)
{
    int val; // deklarera val, inmatas från användaren
    printf("Vad vill du göra?: \n");
    printf("1. Lägga till klasskompis\n2. Visa klasslistan\n3. Stäng program\n");
    scanf("%d", &val);

    if (val == 1) // om val = 1, körs funktionen addMate, dvs lägga till klasskompis
    {
        addMate();
    }
    else if (val == 2) // om val = 2, körs funk showList, dvs listar klasskompisarna
    {
        showList();
    }
    else if (val == 3) // om val = 3 så stängs programmet ner
    {
        printf("Hej då!\n");
        exit(0);
    }
    else // allt annat ger else 
    {
        printf("Fel val, försök igen!\n");
        mySleep(200); // vänta 2 sec
        fflush(stdout); // flusha usleep annars följer den med vidare och stör :@
        printf("\n");
        meny();
    }
}
void addMate()
{
    printf("Hur många vill du lägga till?\n");
    scanf("%d", &antal);
    
    for (int i = 0; i < antal; i++)
    {
        printf("Förnamn: ");
        scanf("%s", fNamn[i]);
        printf("Efternamn: ");
        scanf("%s", eNamn[i]);
    }
    printf("\n");
    meny(); // efter du lagt till klasskamrat(er) går den tillbaka till menyn
}
void showList()
{
    for (int j = 0; j < antal; j++)
    {
        printf("%s %s\n", fNamn[j], eNamn[j]);
    }
    printf("\n");
    meny();
}