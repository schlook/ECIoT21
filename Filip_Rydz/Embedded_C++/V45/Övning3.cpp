#include <iostream>
#include <iomanip> // std::setiosflag... och std::setw() ingår i detta bibliotek

int main()
{
    // std::setiosflags(std::ios::left) för att vänsterställa indrag, där av börjar setw() längst fram
    std::cout << std::setiosflags(std::ios::left);
    std::cout << std::setw(10)<< "Förnamn" << std::setw(15) << " Efternamn" << std::setw(20) << " Gatuadress" 
              << " Stad" << std::endl;
    std::cout << "------------------------------------------------------------------" << std::endl;
    std::cout << std::setw(10)<< "Bruce" << std::setw(15) << "Banner" << std::setw(20) << "Greenstreet 12" 
              << "Los Angeles" << std::endl;
    std::cout << std::setw(10)<< "Peter" << std::setw(15) << "Parker" << std::setw(20) << "Spiderstreet 88" 
              << "New York City" << std::endl;
    std::cout << std::setw(10)<< "T'Challa" << std::setw(15) << "Black Panther" << std::setw(20) << "Panther corner" 
              << "Wakanda" << std::endl;
    std::cout << std::setw(10)<< "Tony" << std::setw(15) << "Stark" << std::setw(20) << "Malibou point" 
              << "California" << std::endl;
    return 0;
}