#include <iostream>

namespace EC
{
    int hej = 1;
    char hejsan = 'H';
};


int main ()
{
    
    int hej = 2;
    char hejsan = 'E';

    std::cout << hej << "\t" << hejsan << std::endl ;

    std::cout << EC::hej << "\t" << EC::hejsan << std::endl ;

    return 0;
}