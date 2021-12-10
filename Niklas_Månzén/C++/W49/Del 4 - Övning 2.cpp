#include <iostream>
#include <algorithm>
#include <cmath>

/*Skapa ett program som tar reda på längden av ett nummer
Du behöver en loop som kontrollerar antalet siffror i numret.
Antal siffror i talet 100101: 6st */

int main()
{

    int number = 100101;
    int count_digits = 0;

    while (number != 0) // Medans number IS NOT 0
    {
        number = number/10; // Delar nummer med 10 hela tiden och plussar count
        count_digits++; // Detta görs tills number är 0..!
    }

    std::cout << "Antal siffror i talet 100101 = " << count_digits << "st" << std::endl;  // Sen bryter vi ut och count_digits värde skrivs ut!
    
    return 0;
}