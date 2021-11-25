#include <iostream>
#include <string>

class Anställd
{
    private:
    //deklarerar variabler som 'private', de ska inte vara synliga utanför klassen
        std::string namn;
        long nummer;
    public:
        void hämtaData()
        {
            std::cout<<"Ange namn: "<<std::endl;
            std::cin>>namn;
            std::cout<<"Ange anställnings nummer: "<<std::endl;
            std::cin>>nummer;
        }
        void visaData()
        {
            std::cout<<"Namn: "<<namn<<std::endl;
            std::cout<<"Anställnings nummer: "<<nummer<<std::endl<<std::endl;
        }
};

int main(void)
{
    //fältvariabel av typen Anställd med plats för 100 element
    Anställd anställda[100];
    //antal anställda från början
    int antal=0;
    //svar från användaren
    char svar;
    //While blocket körs så länge svar är inte lika med 'n'
    while(svar!='n')
    {
        std::cout<<"Ange info för anställd nummer: "<<antal +1<<std::endl;
        anställda[antal++].hämtaData();
        std::cout<<"Vill du ange en till, (j/n)?"<<std::endl;
        std::cin>>svar;
    }
    for (int i = 0; i < antal; i++)
    {
        std::cout<<"Anställd "<<i+1<<std::endl;
        anställda[i].visaData();
    }
    std::cout<<std::endl;

    return 0;
}