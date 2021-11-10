#include <iostream>
#include <iomanip>

int main(void)
{
    //rensar redan inställda indrag som ligger till höger
    //std::cout << std::resetiosflags(std::ios::right);
    //ställer in indrag, här till vänster
    std::cout << std::setiosflags(std::ios::left);
    //setw()tar emot storlek för indrag
    std::cout << std::setw(15)<<"Förnamn" <<
    std::setw(15)<<"Efrernamn" <<
    std::setw(30)<<"Gatuadress" <<"Stad"<<std::endl;
    std::cout<<"----------------------------------------------------------------------------"<<std::endl;
    std::cout << std::setw(15) << "Kalle" << std::setw(15) << "Anka " << std::setw(30) << "Paradisäppelvägen 111"
              << "Ankeborg" << std::endl;
    std::cout << std::setw(15) << "Kajsa " << std::setw(15) << "Anka" << std::setw(30) << "Persikovägen"
              << "Ankeborg" << std::endl;
    std::cout << std::setw(15) << "Olmert " << std::setw(15) << "Olsson " << std::setw(30) << "Paradisäppelvägen 113"
              << "Ankeborg" << std::endl;
    std::cout << std::setw(15) << "Janne " << std::setw(15) << "Långben " << std::setw(30) << "Åvägen"
              << "Ankeborg" << std::endl;
    std::cout << std::setw(15) << "Cornelius " << std::setw(15) << "Knös" << std::setw(30) << "Anketorg"
              << "Ankeborg" << std::endl;
    return 0;
}