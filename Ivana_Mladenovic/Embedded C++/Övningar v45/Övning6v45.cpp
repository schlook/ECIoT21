#include <iostream>

// Deklaration av nollMindre, glöm inte adresseringen!
void nollMindre(int &a, int &b);

//Main börjar
int main()
{
    system("CHCP 1252 >nul 2>nul");//rensar terminalen
    int tal1, tal2;
    std::cout << "Ange ett tal: " << std::endl;
    //tar emot första talet
    std::cin >> tal1;
    std::cout << "Ange ett tal till: " << std::endl;
    //tar emot andra talet
    std::cin >> tal2;
    // Anropar funktionen.
    nollMindre(tal1, tal2);
    // Skriver ut svar.
    std::cout << "Tal 1 = " << tal1 << "\nTal 2 = " << tal2 << std::endl;
    return 0;
}
// Denna funktion sätter det minsta värdet till 0
//måste adressera annars blir det fel
void nollMindre(int &a, int &b)
{
    //om a är mindre än b
    if (a < b)
    {
        //a blir 0
        a = 0;
    }
    //annars
    else
    {
        //blir b 0
        b = 0;
    }
}