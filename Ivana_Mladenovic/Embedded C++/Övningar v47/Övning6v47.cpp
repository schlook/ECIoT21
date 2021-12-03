#include <iostream>
//definerar PI
#define PI 3.14

class Form
{
    public:
        //metoder
        void sättVärde(int a, int b=0){x=a; y=b;}
        void visaArea(){std::cout<<"Inga värden att beräkna!"<<std::endl;}
    protected:
        int x, y;
};
class Triangel : public Form
{
    public:
        //skriver över metoden
        void visaArea()
        {
            double area;
            area=(x*y)/2;
            std::cout<<"Triangeln har en höjd på "<<x<<" och en bas på "<<y<<" och har en area på "<<area<<std::endl;
        }
};
class Fyrkant : public Form
{
    public:
        //skriver över metoden
        void visaArea()
        {
            double area;
            area=x*y;
            std::cout<<"Fyrkantens dimensioner på "<<x<<"x"<<y<<" har en area på "<<area<<std::endl;
        }
};
class Cirkel : public Form
{
    public:
        //skriver över metoden
        void visaArea()
        {
            double area;
            int r=x;
            area=PI*r*r;
            std::cout<<"Cirkeln med en radius på "<<r<<" har en area på "<<area<<std::endl;
        }

};
int main(void)
{
    //kommer från bas-klassen
    Form cirkel1;
    cirkel1.visaArea();
    //under-klasser
    Triangel triangel;
    triangel.sättVärde(10, 4);
    triangel.visaArea();
    Fyrkant fyrkant;
    fyrkant.sättVärde(10, 5);
    fyrkant.visaArea();
    Cirkel cirkel;
    cirkel.sättVärde(9);
    cirkel.visaArea();
    return 0;
}