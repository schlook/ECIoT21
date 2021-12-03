#include <iostream>
#define PI 3.141592653589793

int main(void)
{
    int radius;
    std::cout<<"Skriv in radius: "<<std::endl;
    //tar emot inmatning från användaren som sparas i varabeln 'radius'
    std::cin>>radius;
    //beräknar cirkelarean
    double area=PI*radius*radius;
    //skriver ut resultatet
    std::cout<<"Cirkelarean är: "<<area;
    return 0;
}