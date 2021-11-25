#include <iostream>
namespace EC
{
    int a=13;
    int b=12;
};
int a=10;
int b=16;
int main(void)
{
    std::cout<<a<<std::endl;//anropar global a
    std::cout<<b<<std::endl;//anropar global b
    std::cout<<EC::a<<std::endl;//anropar a i namespace
    std::cout<<EC::b<<std::endl;//anropar b i namespace
    return 0;
}