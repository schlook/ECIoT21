#include <iostream>

// Måste kalla på rätt initierare också
class Overload
{
public:
    Overload(void)
    {

    }
    Overload(int a)
    {

    }
    Overload(int a, char b)
    {

    }
    Overload(int a, char b, int def = 0)
    {
        
    }
};

int main(void)
{
    Overload ove(22);

    return 0;
}


