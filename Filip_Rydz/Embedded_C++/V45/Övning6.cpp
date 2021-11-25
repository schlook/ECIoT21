#include <iostream>

void nollMindre(int &a, int &b); // deklarerar funktionen, adresserar argumenten för att kunna manipulera värdena

int main()
{
    int a, b;
    std::cout << "Skriv in två heltal:" << std::endl;
    std::cin >> a >> b;
    
    std::cout << "a = " << a << std::endl
              << "b = " << b << std::endl;
    
    nollMindre(a, b);// anropar funktionen, tar med två argument, värdet för a resp b
    std::cout << "Efter funktionen 'nollMindre'" << std::endl;  
    std::cout << "a = " << a << std::endl
              << "b = " << b << std::endl;
    return 0;
}
void nollMindre(int &a, int &b)
{
    if (a < b) // om a är mindre än b ändras a till 0
    {
        a = 0;
    } 
    else  // om b är mindre än a ändras b till 0
    {
        b = 0;
    }
}