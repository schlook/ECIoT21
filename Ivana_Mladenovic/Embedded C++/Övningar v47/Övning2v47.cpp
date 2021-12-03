#include <iostream>
class Franchises
{
    public:
        void Slogan(std::string s)
        {

            std::cout<<s<<std::endl;
        }
};

int main(void)
{
    Franchises McDonalds, KFC, BurgerKing;
    McDonalds.Slogan("I'm loving it!");
    KFC.Slogan("Finger Licking Good!");
    BurgerKing.Slogan("Have it your way!");
    return 0;
}
