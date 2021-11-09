#include <iostream>
#include <string>
#include <locale>

int main()
{
    std::locale loc;
    std::string str = "Ett exempel för att testa isblank\tHej\n";

    // områdesbaserad loop
    for (char c : str)
    {
        // Whitespace / blanksteg
        // 
        if (std::isblank(c, loc))
        {
            c = '\n';
        }
        std::cout << c;
    }
    return 0;
}