#include <iostream>
#include <vector>

class Telefonbok
{
    public:
        std::string namn;
        std::string nummer;
        void läggTill(std::string n, std::string  nr){this->namn=n; this->nummer=nr;}
        void kollaUpp(void)
        {
            std::cout<<"TELEFONLISTA:"<<std::endl<<std::endl;
            std::cout<<"Namn: "<<this->namn
            <<" tel: "<<this->nummer<<std::endl;
        }
        void taBort()
        {
            //rensar namn
            namn.clear();
            //sätter värdet till-1
            nummer=-1;
        }
};
int main(void)
{
    Telefonbok lista;
    lista.läggTill("Ivana", "0700224496");
    lista.kollaUpp();
    lista.taBort();
    lista.kollaUpp();
    return 0;
}