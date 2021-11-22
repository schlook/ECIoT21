#include <iostream>
#include <string>
#include <cstdbool>

class DäggDjur
{
    protected:
        int ålder;
        std::string namn;
        double vikt;
    public:    
        //metoder
        void hämtaNamn(std::string n){std::cout<<"Namn: "<<n<<std::endl;}
        void hämtaKön(std::string k){std::cout<<"K\x94n: "<<k<<std::endl;}
        void hämtaÅlder(int n){std::cout<<"\x8Flder: "<<n<<std::endl;}
        double mataDjur(std::string mat, double g)
        {
            std::cout<<"P\x86 menyn finns idag: "<<mat<<std::endl;
            this->vikt=(vikt+(g/100));
            return this->vikt;
        }
        
};
class Fågel
{
    protected:
        int ålder;
        std::string namn;
        double vikt;
    public:    
        //metoder
        void hämtaNamn(std::string n){std::cout<<"Namn: "<<n<<std::endl;}
        void hämtaKön(std::string k){std::cout<<"K\x94n: "<<k<<std::endl;}
        void hämtaÅlder(int n){std::cout<<"\x8Flder: "<<n<<std::endl;}
        double mataDjur(std::string mat, double g)
        {
            std::cout<<"P\x86 menyn finns idag: "<<mat<<std::endl;
            this->vikt=(vikt+(g/100));
            return this->vikt;
        }
    
};
class GrodDjur
{
    protected:
        int ålder;
        std::string namn;
        double vikt;
    public:    
        //metoder
        void hämtaNamn(std::string n){std::cout<<"Namn: "<<n<<std::endl;}
        void hämtaKön(std::string k){std::cout<<"K\x94n: "<<k<<std::endl;}
        void hämtaÅlder(int n){std::cout<<"\x8Flder: "<<n<<std::endl;}
        double mataDjur(std::string mat, double g)
        {
            std::cout<<"P\x86 menyn finns idag: "<<mat<<std::endl;
            this->vikt=(vikt+(g/100));
            return this->vikt;
        }
        
};
//Har valt ut bara hund och katt från däggdjur
class Hund : public DäggDjur
{
    public:
        void ljud(){std::cout<<"Hund pratar: Voff voff!"<<std::endl;}
        void hämtaVikt(double kg)
        {
            
            std::cout<<"Vikt: "<<this->vikt+kg<<"kg"<<std::endl;
            if(vikt>12)
            {
                std::cout<<"Du har gett hunden f\x94r mycket mat s\x86 den m\x86ste avlivas!"<<std::endl;
            }
        }
};
class Katt : public DäggDjur
{
    public:
        void ljud(){std::cout<<"Katt pratar: Mjau mjau!"<<std::endl;}
        void hämtaVikt(double kg)
        {
            
            std::cout<<"Vikt: "<<this->vikt+kg<<"kg"<<std::endl;
            if(vikt>8)
            {
                std::cout<<"Du har gett katten f\x94r mycket mat s\x86 den m\x86ste avlivas!"<<std::endl;
            }
        }
};
//Bara groda från groddjur
class Groda : public GrodDjur
{
    public:
        void ljud(){std::cout<<"Groda pratar: Kvack kvack!"<<std::endl;}
        void hämtaVikt(double kg)
        {
            
            std::cout<<"Vikt: "<<this->vikt+kg<<"kg"<<std::endl;
            if(vikt>0.5)
            {
                std::cout<<"Du har gett grodan f\x94r mycket mat s\x86 den m\x86ste avlivas!"<<std::endl;
            }
        }
};
//Bara papegoja och duva från fåglar
class Papegoja : public Fågel
{
    public:
        void ljud(){std::cout<<"Papegojan pratar: Hejsan svejsan!"<<std::endl;}
        void hämtaVikt(double kg)
        {
            
            std::cout<<"Vikt: "<<this->vikt+kg<<"kg"<<std::endl;
            if(vikt>3)
            {
                std::cout<<"Du har gett papegojan f\x94r mycket mat s\x86 den m\x86ste avlivas!"<<std::endl;
            }
        }
};
class Duva : public Fågel
{
    public:
        void ljud(){std::cout<<"Duvan pratar: Ko-koo-ko ko-koo!"<<std::endl;}
        void hämtaVikt(double kg)
        {
            
            std::cout<<"Vikt: "<<this->vikt+kg<<"kg"<<std::endl;
            if(vikt>2.5)
            {
                std::cout<<"Du har gett duvan f\x94r mycket mat s\x86 den m\x86ste avlivas!"<<std::endl;
            }
        }
};
int main(void)
{
    std::cout<<"V\x84lkommen till EC mini-ZOO!"<<std::endl<<std::endl;
    std::cout<<"H\x84r kommer n\x86gra utvalda d\x84ggdjur: "<<std::endl<<std::endl;
    Hund hund;
    hund.hämtaNamn("Gizmo");
    hund.ljud();
    hund.hämtaKön("hane");
    hund.hämtaÅlder(10);
    hund.mataDjur("Biff", 2000);
    hund.hämtaVikt(7);
    std::cout<<std::endl;
    Katt katt;
    katt.hämtaNamn("Sessan");
    katt.ljud();
    katt.hämtaKön("hona");
    katt.hämtaÅlder(4);
    katt.mataDjur("Fisk", 120);
    katt.hämtaVikt(0.2);
    std::cout<<std::endl;
    std::cout<<"H\x84r kommer groddjur: "<<std::endl<<std::endl;
    Groda groda;
    groda.hämtaNamn("Grodis");
    groda.ljud();
    groda.hämtaKön("hane");
    groda.hämtaÅlder(10);
    groda.mataDjur("Fluga", 30);
    groda.hämtaVikt(0.2);
    std::cout<<std::endl;
    std::cout<<"H\x84r kommer f\x86glar: "<<std::endl<<std::endl;
    Papegoja papegoja;
    papegoja.hämtaNamn("Riko");
    papegoja.ljud();
    papegoja.hämtaKön("hane");
    papegoja.hämtaÅlder(10);
    papegoja.mataDjur("Kex", 0.8);
    papegoja.hämtaVikt(2);
    std::cout<<std::endl;
    Duva duva;
    duva.hämtaNamn("Sanna");
    duva.ljud();
    duva.hämtaKön("hona");
    duva.hämtaÅlder(2);
    duva.mataDjur("Fr\x94mix", 3);
    duva.hämtaVikt(1);
    std::cout<<std::endl;
    return 0;
}