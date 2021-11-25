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
            
            if(inch>=12.0)
            {
                throw inch;
            }
            else
            {
                std::cin>>this->inch;
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
    try
    {
        distans.hämtaDistans();
    }
    catch(double )
    {
        std::cerr <<<< '\n';
    }
    
    
    return 0;
}