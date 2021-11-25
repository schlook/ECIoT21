#include <iostream>
#include <vector>

class Telefonbok
{
    public:
        std::string namn[50];
        int nummer[10];
        void läggTill(std::string n, int nr){int i; this->namn[i]=n; nummer[i]=nr;}
        void kollaUpp(void)
        {
            while(namn=='\0' && nummer=='\0')
            {

            }
        }
        void taBort();
};
int main(void)
{

    return 0;
}