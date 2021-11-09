#include <iostream>

int main(void)
{
    int svar;
    double temp;

    std::cout << "Gör ditt val:" << std::endl
              << "1. Fahrenheit till celsius," << std::endl
              << "2. Celsius till fahrenheit: " << std::endl;

    std::cin >> svar;

    if (svar == 1)
    {
        std::cout << "Skriv in temperatur i fahrenheit: " << std::endl;
        std::cin >> temp;
        std::cout << "I celsius är det " << (5.0 / 9.0 * (temp - 32.0)) << std::endl;
    }
    else
    {
        std::cout << "Skriv in temperatur i celsius: " << std::endl;
        std::cin >> temp;
        std::cout << "I fahrenheit är det " << (9.0 / 5.0 * temp + 32.0);
    }

    std::cout << std::endl;
    return 0;
}