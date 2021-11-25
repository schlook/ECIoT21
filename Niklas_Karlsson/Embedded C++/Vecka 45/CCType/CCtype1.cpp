#include <iostream>
#include <string>
#include <cctype>

int main()
{
    int i = 0;
    std::string str = "c3poaa....ffas";

    // loopar tills vi kommer till ett "icke" alfanumeriskt värde.
    while (isalnum(str[i]))
    {
        i++;
    }

    std::cout << "De första " << i << " tecken är alfanumeriskt" << std::endl;
    return 0;
}