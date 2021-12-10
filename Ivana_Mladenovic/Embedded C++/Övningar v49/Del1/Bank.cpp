#include <iostream>
#include <Windows.h>
#include <fstream>

using namespace std;

class Bank
{
    public:
        void meny(void)
        {
            cout<<"Gör ett val: \n\n"
            <<"1. Sätt in pengar\n"
            <<"2. Ta ut pengar\n"
            <<"3. Avsluta"<<endl;
            int val;
            //Deklarerar variablerna för in- och uttag
            float insättning, uttag;
            //Inmatning från användaren sparas i variabel 'val'
            cin>>val;
            //switch testar värdet i 'val' och kör respektive fall, alltså det case som matchar värdet i 'val'
            switch (val)
            {
                //Fall för insättning
                case 1:
                    saldoFrånFil();
                    cout<<"Du har just nu: "<<saldo<<" SEK"<<endl;
                    cout<<"Ange hur mycket du vill sätta in: "<<endl;
                    cin>>insättning;
                    //saldo beräknas efter insättning
                    saldo=saldo+insättning;
                    saldoTillFil();
                    cout<<"Du har satt in: "<<insättning<<" SEK"<<endl;
                    //nytt uppdaterat saldo skrivs ut
                    cout<<"Nytt saldo: "<<saldo<<" SEK"<<endl;
                    //anropar meny-funktionen
                    meny();
                    break;//avbryter switch
                //Fall för uttag
                case 2:
                    cout<<"Ange hur mycket du vill ta ut: "<<endl;
                    cin>>uttag;
                    saldoFrånFil();
                    //Om saldo är större eller lika med uttag körs if-blocket
                    if(saldo>=uttag)
                    {   
                        //Tar ut pengar
                        cout<<"Du tog precis ut: "<<uttag<<" SEK"<<endl;
                        //Beräknar saldot efter uttaget
                        saldo=saldo-uttag;
                        saldoTillFil();
                        //Nytt saldo skrivs ut
                        cout<<"Nytt saldo: "<<saldo<<" SEK"<<endl;   
                    }
                    //Annars körs else-blocket
                    else
                    {   
                        //Varningsmeddelande om att man saknar täckning på kontot
                        saldoFrånFil();
                        cout<<"Du har för lite pengar för att kunna ta ut "<<uttag<<" SEK"<<endl;
                    }
                    //anropar menyn
                    meny();
                    break;
                //Fall 3 för programavstängning
                case 3:
                    cout<<"Tack för att du använder EC Bank! \nVälkommen åter!\n\n";
                    Sleep(500);//fördröjer avstängning med 0,5 sek
                    break;
                //Övriga fall, alltså alla andra fall, felaktiga fall
                default:
                    cout<<"Du har angett fel val. Var god försök igen!\n";
                    meny();
                    break; 
            }
        }
        //metod för inlogg
        void inlogg(void)
        {
            //öppnar pin-filen för läsning där pin-koden finns via metod
            läsaFrånFil();
            //variabel för antal försök
            int försök=3;
            //så länge försök är större än 0
            while(försök>0)
            {   
                //deklarerar bool-variabel för kontroll
                bool minBool;
                //gör
                do
                {
                    //Användaren anger koden
                    cout<<"Ange din PIN-kod: ";
                    cin>>userPin;
                    //om pin från filen matchar pin från inmatningen
                    if(userPin==filPin)
                    {
                        cout<<"Inloggningen lyckades!"<<endl;
                        //sätter bool-variabeln till true
                        minBool=true;
                        meny();
                    }
                    //annars
                    else 
                    {
                        //fel pin
                        cout<<"Du har angett fel PIN-kod. Var god försök igen!"<<endl;
                        //försök minskar med 1
                        försök--;
                        //antal möjliga försök visas för användaren
                        cout<<"Antal försök kvar: "<<försök<<endl;
                        //bool-variabeln ändras till false
                        minBool=false;
                    }
                    //om antal försök är lika med 0   
                    if(försök==0)
                    {
                        //kontot spärrat
                        cout<<"Du har misslyckats 3 ggr och kontot har nu spärrats!"<<endl;
                        //avbryter loopen
                        break;    
                    }
                }while(minBool!=true);//så länge minBool inte är true
            }     
        }
        //metod för filläsning
        void läsaFrånFil(void)
        {
            //filvariabel för läsning deklareras
            ifstream fil;
            //öppnar filen
            fil.open("pin.txt");
            //värdet från filen sparas i variabeln 'filPin'
            fil>>filPin;
            //stänger filen
            fil.close();
        }
        //metod för lagring av nytt saldo i fil
        void saldoTillFil()
        {
            //deklarerar fi-variabel för att skriva till filen
            ofstream saldoIn;
            //öppnar saldo-filen
            saldoIn.open("saldo.txt");
            //värdet från variabeln 'saldo' sparas i fil-variabeln
            saldoIn<<saldo;
            //stänger filen
            saldoIn.close();
        }
        void saldoFrånFil()
        {
            ifstream saldoUt;
            //öppnar filen för läsning
            saldoUt.open("saldo.txt");
            //värdet från filen sparas i variabeln 'saldo'
            saldoUt>>saldo;
            saldoUt.close();
        }
    private:
        int userPin, filPin;
        float saldo=0;
};

 int main(void)
 {
    Bank b;
    b.inlogg();
     return 0;
 }