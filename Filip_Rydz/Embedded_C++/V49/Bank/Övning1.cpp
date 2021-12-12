#include <iostream>
#include <fstream> // biblioteket fstream för att använda ifstream och ofstream

class Bank
{
private:
    double saldo;
    int saldoIn;
    int saldoUt;
    std::ifstream output; // ifstream när vi endast vill läsa innehållet, -> konstruktorn Bank
    std::ofstream skrivÖver; // ofstream när vi vill skriva över innehåll. -> metoden skrivaSaldo
    std::ofstream _log; // -> metoden log, (ofstream = skriva över)
public:
    Bank() // konstruktor
    {
        output.open("saldo.txt"); // öppnar filen.
        output >> saldo; // hämtar innehållet från filen och tilldelar värdet till vår saldo variabel som ligger privat i klassen
        output.close(); // stäng filen
    }
    void seSaldo() { std::cout << "Ditt saldo: " << saldo << std::endl; } // metoden skriver ut nuvarande saldo

    void insättning() // metod för insättning på kontot
    {
        std::cout << "Ange hur mycket du vill sätta in: "; std::cin >> saldoIn;
        std::cout << "Du satte in: " << saldoIn << std::endl;
        saldo += saldoIn; // saldo = saldo + saldoIn

        log(saldoIn, '+'); // kallar på log, som sparar transaktionen till filen 'log.txt'
        skrivaSaldo(saldo); // anropar metoden för att skriva över nuvarande saldo till filen 'saldo.txt'
    }
    void uttag() // metod för uttag
    {
        std::cout << "Ange hur mycket du vill ta ut: "; std::cin >> saldoUt;
        if (saldoUt > saldo) // om uttag överstiger saldot körs if och felmedelande ges
        {
            std::cout << "Du har inte täckning så det räcker!" << std::endl;
            std::cin.ignore(); // ska rensa strömmen? likt fflush... om jag förstått rätt
        }
        else // om täckning finns
        {
            saldo -= saldoUt; // saldo = saldo - saldoUt
            std::cout << "Du tog ut: " << saldoUt << std::endl;
            
            log(saldoUt, '-'); // kallar på log, som sparar transaktionen till filen 'log.txt'
            skrivaSaldo(saldo); // anropar metoden och skriver över det nya saldot
        }
    } 
    void skrivaSaldo(double nyttSaldo) // metoden för att skriva över nya saldot till filen, tar emot det nya saldot som argument
    {
        skrivÖver.open("saldo.txt");
        skrivÖver << nyttSaldo;
        skrivÖver.close(); 
    }
    void log(double transaktion, char opp) // metoden log, tar emot transaktionen och en opperator dvs '+' eller '-'
    {
        _log.open("log.txt", std::ios::app); // ios::append för att skriva in fler än ett värde, utan den hade värdet bara skrivits över varje gång log kallats
        _log << opp << transaktion << std::endl; // opp = (+/-)
        _log.close();


    }
};

class Inlogg : public Bank // Skapar en ny klass härled till basklassen Bank, denna sköter login
{
private:
    short int pinkod; // short int ist för int, sparar minne om än lite..., pinkod tilldelas den rätta pinkoden, tempPin är inmatad pin
    std::ifstream loggin; 
public:
    bool login(short int tempPin) // metod som returnerar en boolean, inmatad pin som argument
    {
        loggin.open("pinkod.txt"); // öppna filen
        loggin >> pinkod; // tilldela innehållet från filen till till variabeln 'pinkod'

        loggin.close(); // stäng filen

        if (pinkod == tempPin) { return true; } // tempPin jämförs med pinkod som hämtads från filen 'pinkod.txt'. om pinkoderna stämmer returneras 'true'

        else { return false; } // om de inte stämmer returneras false
    }    
};

void gränssnitt() // separat funktion för att hantera gränssnitt, dvs mellanrum/tabulur vid utskrift. Om jag vill ändra gränssnittet är det lättare att ändra denna en alla enkskiljda utskrifter
{
    std::cout << "\n\t\t\t\t\t";
}

int main()
{
    short int tempPin; // användarens inmatningspin
    bool loginAttempt; // boolean som tilldelas av metoden 'login'
    short int val; // meny valen
    Inlogg inlogg; // skapar objekt för att kalla på login med.

    std::cout << "*************************************** ~Välkommen till Banken!~ ***************************************" << std::endl;
 
        for (int i = 0; i < 3; i++) // loop som ger 3 inloggningsförsök
        {
            gränssnitt();
            std::cout << "Ange din pinkod: "; std::cin >> tempPin; // hämtar pink från inmatning

            loginAttempt = inlogg.login(tempPin); // loginAttempt tilldelas bool som metoden login returnerar
            
            if(loginAttempt == true) // vid lyckat inloggningsförsök
            { 
                gränssnitt(); std::cout << "Inloggning lyckades" << std::endl; break; // om true bryts loopen
            }

            else if (loginAttempt == false && i != 2) // misslyckat inloggninsförsök till och med sista
            {
                gränssnitt(); 
                std::cout << "Felaktigt pinkod, försök igen.." << std::endl;
                if (i == 1) // vid sista försöket
                {   
                    gränssnitt(); 
                    std::cout << "Sista försöket" << std::endl;
                }
            }
            if (i == 2) // vid samtliga misslyckade inloggningförsök
            { 
                gränssnitt(); 
                std::cout << "Du har anget felaktig pinkod " << i + 1 << " gånger. Inloggningsförsök misslyckades." << std::endl; 
                exit(1); // vid 3 misslyckade inloggningsförsök stängs programmet
            }
        }
    
    while (loginAttempt == true) // meny som körs vid lyckad inloggning
    {
        Bank bank; // när rätt pinkod skrivs in, körs konstruktorn dvs så hämtas saldo från fil.
        gränssnitt(); 
        std::cout << "Vad vill du göra: " << std::endl;
        gränssnitt(); 
        std::cout << "1. Se saldo" << std::endl;
        gränssnitt(); 
        std::cout << "2. Insättning" << std::endl;
        gränssnitt(); 
        std::cout << "3. Uttag" << std::endl;
        gränssnitt(); 
        std::cout << "4. Avsluta" << std::endl;
        gränssnitt();
        std::cin >> val;

        switch (val) // meny, val
        {
        case 1: // se saldo
            bank.seSaldo(); // val 1 kallar på seSaldo
            break;
        case 2: // insättning
            bank.insättning();
            break;
        case 3: // uttag
            bank.uttag();
            break;
        case 4: // avsluta
            std::cout << "*************************************** ~Tack och välkommen tillbaka!~ ***************************************" << std::endl;
            exit(1);
        default: // om annan inmatning än 1-4, felmedelande och menyn körs igen
            gränssnitt();
            std::cout << "Du har gjort ett felaktigt val, försök igen" << std::endl;
            break;
        }    
    }
    return 0;
}