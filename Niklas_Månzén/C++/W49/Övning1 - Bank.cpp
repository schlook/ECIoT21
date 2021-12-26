#include <iostream>
#include <fstream>

class Pin
{
    public:
        int read_Pin()
        {
            std::ifstream file ("pin.txt");     // Ifstream checkar värdet inne i filen
            int real_Pin, guess_Pin;
            int tries = 0;
            file >> real_Pin;           // Tilldelar file till real_Pin

            std::cout << "Please enter your PIN : " << std::endl;
            std::cin >> guess_Pin;

            while (guess_Pin != real_Pin && tries < 2 ) // Om guess_Pin IS NOT real_Pin OCH antal försök är under 2 ( 0,1,2 ) så loopar vi.
            {
                std::cout << "Wrong PIN. Please try again : \n";
                std::cin >> guess_Pin;
                tries++;
            }

            if (guess_Pin == real_Pin)      // Korrekt! Returnerar 1 tillbaka till main
            {
                std::cout << "SUCCESS!" << std::endl;
                file.close();
                return 1;
            }

            else if (tries == 2)        // Annars fail. Returnerar 0 tillbaka till main
            {
                std::cout << "Too many tries. You are now blocked for security reasons. Farewell!" << std::endl;
                file.close();
                return 0;
            }

            return -1;  // Om man skriver in bokstäver returnerar vi -1
        }
};

class Saldo
{
    public:
        void read_Saldo()       // Läser saldo genom ifstream
        {
            std::ifstream file ("saldo.txt");
            
            double saldocheck;
            file >> saldocheck;     // saldocheck får värdet som file har

            std::cout << "Current SALDO at : " << saldocheck << " Euro " << std::endl;
            
            file.close();
            return; // returnerar VOID
        }

        void withdraw()
        {
            std::ifstream file1 ("saldo.txt");
            double saldocheck, new_saldo, withdraw;
            file1 >> saldocheck;
            
            std::cout << "How much do you wish to Withdraw? : " << std::endl;
            std::cin >> withdraw;
            
            new_saldo = saldocheck - withdraw;      // Nya saldot är gamla saldot minus det man vill ta ut 

            std::ofstream file2 ("saldo.txt");
            file2 << new_saldo ;                // Öppnar ofstream för att skriva över
            
            std::cout << "Current SALDO at : " << new_saldo << " Euro " << std::endl;
            file1.close();
            file2.close();
            return; 
        }

        void deposit()  // samma som withdraw fast tvärtom vid "matematiken"
        {
            std::ifstream file1 ("saldo.txt");
            double current_saldo, new_saldo, deposit ; 
            file1 >> current_saldo;
            
            std::cout << "How much do you wish to Deposit? : " << std::endl;
            std::cin >> deposit;            

            new_saldo = current_saldo + deposit; // Här plussar jag på istället.

            std::ofstream file2 ("saldo.txt");
            file2 << new_saldo ;
            
            std::cout << "NEW SALDO at : " << new_saldo << " Euro " << std::endl;

            file1.close();
            file2.close();
            return;
        }
};

int main()
{
    std::cout << "-- Welcome To Los Bancos--" << std::endl; // Välkomnstmeddelande och sätter igång objekt.
    Pin user1;

    if (user1.read_Pin() == 0)    // Om read_pin returnerar 0 eller -1 har det failat. Vi stänger ned programmet.
    {
       return 0;
    }
      
    Saldo user2;
    int choice;     // Om allt gått bra fortsätter programmet.

    while (choice != 4) // Så länge valet EJ är 4 loopas menyn.
    {
        std::cout << "-- What do you wish to do? --" << std::endl;
        std::cout << "1 - Check Saldo\n2 - Withdraw\n3 - Deposit\n4 - Logout\n... ";
        std::cin >> choice;
        
        switch (choice) // respektive metod körs beroende på vad användaren väljer. 
        {
            case 1:
                user2.read_Saldo();
                break;
            case 2:
                user2.withdraw();
                break;
            case 3:
                user2.deposit();
                break;
            case 4:
                std::cout << "-- Logging Out --" << std::endl;
                break;
            default :
                std::cout << "-- !! Invalid Choice !! --" << std::endl;
                break;    
        }
    }
    return 0;
}