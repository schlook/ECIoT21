#include <iostream>
#include <string>
#include <cctype>

int main()
{
    int i = 0;
    std::string str = "C++";

    //
    while (str[i])
    {
        std::cout << "Tecknet "
                  << str[i] << " är " << (!isalpha(str[i]) ? "inte " : "") << "alfabetisk"
                  << std::endl;
        i++;
    }
    return 0;
}