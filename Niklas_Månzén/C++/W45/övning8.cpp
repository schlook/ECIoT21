#include <iostream>

class Int
{
    private:
        int private_Num;

    public:

        Int(int public_Num)
        {
            this->private_Num = public_Num;
        }

        void addera(Int num1, Int num2)
        {
            private_Num = num1.private_Num + num2.private_Num;
        }

        void visa()
        {
            std::cout<< private_Num << std::endl;
        }
             
};

int main()
{
    Int mainInt1(5);

    Int mainInt2(10);

    Int mainInt3(15);

    mainInt3.addera(mainInt1, mainInt2);

    std::cout << "mainInt3 = ";
    mainInt3.visa();
    

    return 0;
}