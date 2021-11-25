#include <iostream>

class Distans
{
    public:
        double foot, inch, meter, cm;
        void hämtaDistans(void)
        {
            std::cout<<"Ange foots: ";
            std::cin>>this->foot;
            std::cout<<std::endl;
            std::cout<<"Ange inches: ";
            std::cin>>this->inch;
            //om inches är större eller lika med 12
            if(inch>=12.0)
            {
                //kastar 1.2 error
                throw 1.2;
            }
            std::cout<<std::endl;

        }
        void visaDistans()
        {
            //1 Foot = 0.38048 meter
            this->meter=foot*0.38048;
            std::cout<<foot<<" fot blir "<<meter<<" meter."<<std::endl;
            //1 Inch = 2.54 Centimeter
            this->cm=inch*2.54;
            std::cout<<inch<<" inch blir "<<cm<<" centimeter."<<std::endl;
        }
};

int main(void)
{
    Distans distans;
    //provar metoden hämtaDistans
    try
    {
        distans.hämtaDistans();
    }
    //fångar errorn som blev kastad
    catch(double err)
    {
        std::cerr <<"Du skrev in "<<err<<" inches!"<<std::endl;
    }
    
    distans.visaDistans();
    return 0;
}