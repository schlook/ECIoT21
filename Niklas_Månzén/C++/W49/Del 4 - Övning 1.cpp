#include <iostream>

int main()
{

    int talet;
    int counter = 0;

    std::cout << "Ange ett tal! : " << std::endl;

    std::cin >> talet;

    for (int i = 0; i < talet; i++)
    {
        if(counter == 4)    // Counter börjar på 0. Är counter 4 (...5) så skriver den NO och "resettar" counter men fortsätter loopen.
        {
            std::cout << "NO!" << std::endl;
            counter = 0;
            continue;
        }

        std::cout << i+1 << "\t";  

        counter++;
    }

    return 0;
}