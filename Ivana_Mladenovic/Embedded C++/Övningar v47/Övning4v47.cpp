#include <iostream>

class Fordon
{
    public:
        std::string märke;
        int hastighet;
        double antalMil;
        void sättinfo(std::string m, int h, double mil)
        {
            märke=m;
            hastighet=h;
            antalMil=mil;
        }

};
class Buss : public Fordon
{
    public:
        int sittplatser, ståplatser;
        void kapacitet(int k, int s){sittplatser=k; ståplatser=s;}
        void printinfo()
        {
            std::cout<<"Bussen av märke "<<märke<<" har maxhastighet på "<<hastighet
            <<" km/h och har gått "<<antalMil<<" mil hittills. \nDessutom har den "<<sittplatser
            <<" antal sitt- och "<<ståplatser<<" ståplatser."<<std::endl;
        }
};
class Bil : public Fordon
{
    public:
        int maxvikt;
        void vikt(int v){maxvikt=v;}
        void printinfo()
            {
                std::cout<<"Bilen av märke "<<märke<<" har maxhastighet på "<<hastighet
                <<" km/h och har gått "<<antalMil<<" mil hittills. \nDessutom har den "<<maxvikt
                <<" kg i maxvikt."<<std::endl;
            }
};
//main
int main(void)
{
    std::cout<<"Bussar: "<<std::endl;
    Buss buss1;
    //tar emot argument märke, hastighet, antalmil
    buss1.sättinfo("Volvo", 160, 10653);
    //tar argument sitt- resp ståplatser
    buss1.kapacitet(70, 55);
    //skriver ut all bussinfo
    buss1.printinfo();
    std::cout<<"Bilar: "<<std::endl;
    Bil bil1;
    bil1.sättinfo("Ferrari", 335, 2068);
    //tar argument maxvikt
    bil1.vikt(2250);
    //skriver ut all bilinfo
    bil1.printinfo();
    return 0;
}