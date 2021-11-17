#include <iostream>

class Int
{
    private:
        int i;

    public:
        // constructor
        Int(int ii)
        {
            this->i = ii;
        }
        // lägger till två Int
        void addera(Int första, Int andra)
        {
            i = första.i + andra.i;
        }
        // visar Int
        void visa()
        {
            std::cout
                << i << std::endl;
        }
};
int main()
{

    Int Int1(5);

    Int Int2(8);

    Int Int3(15);

    Int3.addera(Int1, Int2);
    std::cout << "Int3 = ";
    Int3.visa();
    
    return 0;
}