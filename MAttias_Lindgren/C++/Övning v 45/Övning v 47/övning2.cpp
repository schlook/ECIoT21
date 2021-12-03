#include <iostream>

class brand
{
    public:
    void slogan (std::string m)
    {
        std::cout <<m << std::endl; 
    }


};

int main ()
{
   brand mcdonals, burgerKing, max ,KFC ;
   mcdonals.slogan("          I'm loving it!");
   burgerKing.slogan("       Have it your way!");
   max.slogan("    Sveriges godaste hamburgare");
   KFC.slogan("       Finger licking good...");

    return 0;
}