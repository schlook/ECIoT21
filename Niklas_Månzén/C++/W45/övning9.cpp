#include <iostream>
#include <string>

class anställd
{
    private :
        std::string namn;
        long nummer;

    public:

        void hämtaData()
        {
            std::cout << "Namn : " << std::endl;
            std::cin >> namn;
            std::cout << "Anst.nummer : " << std::endl;
            std::cin >> nummer;
        }

        void visaData()
        {
            std::cout << "Namn : " << namn << std::endl;
            std::cout << "Anst.nummer: " << nummer << std::endl;
        }
};

int main()
{
    anställd anställda[100]; 
    char svar;
    int antal = 0;

    do
    {
        std::cout << "Ange information för anställd nummer " << antal + 1 << std::endl;
        anställda[antal++].hämtaData();
        std::cout << "Ange en annan (j/n)? ";
        std::cin >> svar;
    }while (svar != 'n');


    for (int j = 0; j < antal; j++) 
    {
        std::cout << "Anställningsnummer: " << j + 1 << std::endl;
        anställda[j].visaData();
    }
    std::cout << std::endl;

    return 0;
}