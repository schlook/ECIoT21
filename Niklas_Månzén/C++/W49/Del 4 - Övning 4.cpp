#include <iostream>
#include <cmath>
#include <algorithm>

void multiplication(int number_,int times_) // En funktion för vilket nummer och intervall som helst!
{
    for (int i = 1; i <= times_; i++)
    {
        int answer = number_ * i; // Answer tilldelas nytt värde varje runda!
        std::cout << number_ << " * " << i << " = " << answer;
        std::cout << std::endl;
    }
}


int main()
{
    int number, times;

    std::cout << "---Willkommen Mein Liebchen!---\n";
    std::cout << "Let's do some multiplication!\n";

    std::cout << "Enter your number : ";
    std::cin >> number;

    std::cout << "Enter the interval : ";
    std::cin >> times;

    multiplication(number,times);   // Scannar in värden från user och passar in i funktionens argument.

    return 0;
}