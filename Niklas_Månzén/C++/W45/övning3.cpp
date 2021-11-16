#include <iostream>
#include <cstdlib>
#include <iomanip>

// std::setw() 
// std::setiosflags(std::ios::left)
// std::cout <<std::setiosflags(std::ios::left)

int main()
{

    std::cout << std::setiosflags(std::ios::left) << std::setw(20) << "F\x94rnamn" << std::setw(20) << "Efternamn" << std::setw(20) << "Gatuadress" << std::setw(20) << "Stad" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl; 

    std::cout << std::setiosflags(std::ios::left) << std::setw(20) << "Niklas" << std::setw(20) << "M\x86nzan" << std::setw(20) << "Norumsh\x94jd 31" << std::setw(20) << "GBG" << std::endl; 

    std::cout << std::setiosflags(std::ios::left) << std::setw(20) << "David" << std::setw(20) << "Ohlin Saletti" << std::setw(20) << "Byv\x84""dersgatan 4" << std::setw(20) << "GBG" << std::endl;

    return 0;
}