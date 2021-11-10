#include <iostream>
/* getenv() tillhör <cstdlib> varför funkar inte programmet om man inkluderar cstdlib?*/
int main(void)
{
    std::cout<<"Min dator heter: "<<getenv("COMPUTERNAME")<<std::endl;
    return 0;
}