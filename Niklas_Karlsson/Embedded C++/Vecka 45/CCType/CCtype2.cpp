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
        if (isalpha(str[i]))
        {
            std::cout << "Tecknet " << str[i] << " är alfabetisk" << std::endl;
        }
        else
        {
            std::cout << "Tecknet " << str[i] << " är inte alfabetisk" << std::endl;
        }
        i++;
    }
    return 0;
}