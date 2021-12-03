#include <iostream>

class Fordon
{
    public:
        double topphastighet;
        double antal_mil;
        std::string brand;
    
        Fordon()
        {
            std::cout << "...Brummmbrumm!..." << std::endl;
        }
        
};

class Buss : public Fordon
{
    public:
        /*float topphastighet_buss;
        float antal_mil_buss;
        std::string brand_buss;*/
        
    Buss(int sittplatser)
    {
        std::cout << "Max antal sittplatser i Bussen \x84r : "<< sittplatser << "st." << std::endl;
    }

};

class Bil : public Fordon
{
    public:
        /*float topphastighet_bil = topphastighet;
        float antal_mil_bil = antal_mil;
        std::string brand_bil = brand; */

    Bil(int max_vikt)
    {
        std::cout << "Maxvikt p\x86 bilen \x84r : "<< max_vikt << "kg." << std::endl;
    }

};

int main()
{

    Buss buss1(32);

    buss1.antal_mil = 1234.00;
    buss1.topphastighet = 125.50;
    buss1.brand = "Volvo";

    std::cout << "M\x84rke : " << buss1.brand << std::endl;
    std::cout << "Antal Mil : " << buss1.antal_mil << std::endl;
    std::cout << "Topphastighet : " << buss1.topphastighet << std::endl;

    std::cout << "________________________________________" << std::endl;

    Bil bil1(500);

    bil1.antal_mil = 100.33;
    bil1.topphastighet = 299.50;
    bil1.brand = "Ferrari";

    std::cout << "M\x84rke : " << bil1.brand << std::endl;
    std::cout << "Antal Mil : " << bil1.antal_mil << std::endl;
    std::cout << "Topphastighet : " << bil1.topphastighet << "km/h" << std::endl;

    std::cout << "________________________________________" << std::endl;
      
    return 0;
}