#include <iostream>
#include <cstdlib>
#include <math.h>

void nollMindre(int &tal1, int &tal2);

int main()
{
    int tal1, tal2;

    std::cout << "Type two integers numbers, please!!!" << std::endl ;
    std::cout << "First : " << std::endl ;
    std::cin >> tal1;

    std::cout << "Second : " << std::endl ;
    std::cin >> tal2;

    nollMindre(tal1,tal2);

    std::cout << tal1 << "\t" << tal2 << std::endl;

    return 0;
}


void nollMindre(int &tal1, int &tal2)
{
    if (tal1 > tal2)
    {
        tal2 = 0;
    }
    else
    {
        tal1 = 0;
    }

}