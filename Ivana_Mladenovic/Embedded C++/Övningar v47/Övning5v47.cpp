#include <iostream>
#include <vector>

class Telefonbok
{
    public:
        std::string namn[50];
        int nummer[10];
        void läggTill(std::string n, int nr){int i; namn[i]=n; nummer[i]=nr;}
        void kollaUpp(void)
        {
            for (std::string i = 0; i <= namn; i++)
            {
                std::cout<<""
                for (int j = 0; j <= nummer; j++)
                {
                    /* code */
                }
                
            }
            
        }
        void taBort();
};
int main(void)
{

    return 0;
}