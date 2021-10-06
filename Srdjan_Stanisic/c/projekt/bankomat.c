#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//skapar en mall för de attribut en medlem ska ha
struct medlem
{
    char fnamn[15];
    char enamn[15];
    char telefonnummer[15];
    char adress[20];
    char ort[15];
};
//får en strukt som argument för att spara inmatningen av kundens uppgifter
void dinaUppgifter (struct medlem kund[],int num)
{
    printf("Fornamn: ");
    scanf("%s",kund[num].enamn);
    printf("Efternamn: ");
    scanf("%s",kund[num].enamn);
    printf("telefonnummer: ");
    scanf("%s",kund[num].telefonnummer);
    printf("adress: ");
    scanf("%s",kund[num].adress);
    printf("ort: ");
    scanf("%s",kund[num].ort);
}
//Skriver ut på konsolen kundens uppgifter
void printUppgifter (struct medlem kund[],int num)
{   //Se över funktion fungerar inte som de ska kontrollera om array struct är tom 
    if( kund[num].enamn == '0/' )
    {
        printf("Ingen uppgifter \n");
    }else
    {
        printf("Namn: %s\n",kund[num].fnamn);
        printf("Efternamn: %s\n",kund[num].enamn);
        printf("telefonnummer: %s\n",kund[num].telefonnummer);
        printf("Adress: %s\n",kund[num].adress);
        printf("Ort: %s\n",kund[num].ort);
    }
};
//skriver ut menyn på konsolen
void meny()
{
    printf("\n**********Bankomat**********\n\n");
    printf("1. se saldo\n");
    printf("2. ta ut\n");
    printf("3. satt in\n");
    printf("4. Dina uppgifter \n");
    printf("5. skriv ut dina uppgifter \n");
    printf("6. logga ut\n\n");
    printf("****************************\n");
}
//visar kundens saldo på konsolen 
void seSaldo(int s)
{
    printf("Ditt saldo ar: %d\n\n",s);
}
// arggument som pointer för att ändra saldo minus de kunden vill ta ut 
void taUt(int *saldo)
{
    int a;
    printf("Hur mycket vill du ta ut: ");
    scanf(" %d",&a);
    // om saldo är mindre än 0 de går inte att ta ut pengar 
    if((*saldo - a)> 0)
    {
    *saldo = *saldo - a;
    }else
    {
    printf("lagt saldo\n");
    };
}   //kontrollerar saldo och adderar de kunden vill sätta in 
void sattIn(int *saldo)
{
    int a;
    printf("Hur mycket vill du satta in: ");
    scanf(" %d",&a);
    *saldo = *saldo + a;
}

int main()
{   //kundens saldo satt till 10 000
    int medlemsnummer = 0;
    int saldo = 10000;
    int val;
    struct medlem kund[10];
    
    /*
    Vi har en loop som minst görs en gång såkallad do while.
    vi frågar kunden efter va dom vill göra och väljer
    rätt funktion i switchen. */
    
    do{
    meny();
    printf("option: ");
    scanf("%d",&val);
    system("cls");

    switch(val){
    case 1: seSaldo(saldo);
    break;
    case 2: taUt(&saldo);
    break;
    case 3: sattIn(&saldo);
    break;
    case 4: dinaUppgifter(kund,medlemsnummer);
    break;
    case 5: printUppgifter(kund,medlemsnummer);
    break;
    case 6: printf("Loggat ut\n");
    break;
    default:  printf("fel inmattning\n");
    }
    }while(val!=6);

    return 0;
}
