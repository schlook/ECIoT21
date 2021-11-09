#include <iostream>
// För setw()
#include <iomanip>

int main()
{
    // Vårt nummer
    unsigned long n;

    std::cout << "Skriv in ett nummer: " << std::endl;
    std::cin >> n;
    // Loopar från 1 till 200
    for (int j = 1; j <= 200; j++)
    {
        // Skriver ut multiplicering av n (j * n)
        std::cout << std::setw(5) << j * n << "  ";
        // Vart 10:e nummer.
        if ((j % 10) == 0)
        {
            // startar ny linje med endl
            std::cout << std::endl;
        }
    }
    return 0;
}