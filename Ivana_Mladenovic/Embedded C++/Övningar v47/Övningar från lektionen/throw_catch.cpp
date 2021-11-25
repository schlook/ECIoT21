#include <iostream>

class minClass
{
    public: 
       void myndig(int ålder)
        {
            try
            {
                //om detta stämmer körs if-blocket
                if(ålder>=18)
                {
                    std::cout<<"Hurra, du är över 18 år. Jippie!!"<<std::endl;
                }
                //annars
                else
                {
                    //kastar ålder från inmatningen
                    throw(ålder);
                }
            }
            //fångar åldern från inmatningen
            catch(int år)
            {
                //skriver ut felmeddelande
                std::cerr <<"Tyvärr du är omyndig!! Du är bara "<<år<<std::endl;
            }
            
        }
};
int main(void)
{
    //skapar en objekt av klassen minClass
    minClass första;
    //lägger in ålder i objektet via klassens metod
    första.myndig(17);
    return 0;
}
