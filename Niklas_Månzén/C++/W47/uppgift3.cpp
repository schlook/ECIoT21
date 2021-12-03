#include <iostream>

class Person
{
    public:
        std::string namn;   // Deklarerar namn

        Person()
        {
            // Default
        }
};

class Moder : public Person
{
    public:
        Moder(std::string namn_)
        {
            this->namn = namn_; // Det HÄR namn är DET här namn_
            std::cout << "Hi. My name is " << namn << " And I'm the mother..." << std::endl;
        }

};

class Dotter : public Person
{
    public:
        Dotter(std::string namn_)
        {
            this->namn = namn_;    // Det HÄR namn är DET här namn_
            std::cout << "Hi. My name is " << namn << " And I'm the daughter..." << std::endl;
        }

};

int main()
{

    Dotter dotter1("Helga");

    Moder moder1("Britta");

    return 0;
}