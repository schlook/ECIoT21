#include <iostream>

class BillBoard
{
    public:
    std::string titel;
    //metoder
    //tar emot titel
    void sättTitel(std::string t)
    {
        titel=t;
    }
    //returnerar titel
    std::string hämtaTitel(void)
    {
        return titel;
    }
};
int main(void)
{
    BillBoard lista1, lista2, lista3;
    std::cout<<"Nedan visas topp 3 på hitlistan: "<<std::endl;
    //sätter titel
    lista1.sättTitel("1. La Bamba!");
    //hämtar titel via cout
    std::cout<<lista1.hämtaTitel()<<std::endl;
    lista2.sättTitel("2. Oh, Pretty woman!");
    std::cout<<lista2.hämtaTitel()<<std::endl;
    lista3.sättTitel("3. Stand by me!");
    std::cout<<lista3.hämtaTitel()<<std::endl;
    return 0;
}
