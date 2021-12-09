#include <iostream>

/*  KFC  - Finger Licking Good
    McDonalds - I'm Loving It
    Burger King - Have It Your Way */

class Franchises
{
    // Note to self. Tar vi bort public: i en class blir ALLT private. Inte alltid bra. Tvärtom i en struct.

    public:

        void call_mc()
        {
            std::cout << "MC' Donalds - I'm Lovin' it!" << std::endl;
        }

        void call_kfc()
        {
            std::cout << "Kentucky Fried Chicken - Finger Licking Good!" << std::endl;
        }

        void call_bk()
        {
            std::cout << "Burger King - Have It Your Way!" << std::endl;
        }
};

/* class Kfc : public Franchises        -------------    Kan man också göra...lol.
{
    public:
    Kfc()
    {
        std::cout << "Finger Licking Good" << std::endl;
    }
};

class Mcdonalds : public Franchises
{
    public:
    Mcdonalds()
    {
        std::cout << "I'm Lovin It!" << std::endl;
    }
};

class Burgerking : public Franchises
{
    public:
    Burgerking()
    {
        std::cout << "Have It Your Way" << std::endl;
    }

}; */

int main()
{

    Franchises mc,bk,kfc;

    mc.call_mc();

    bk.call_bk();

    kfc.call_kfc();


    return 0;
}