#include <iostream>

class X
{
public:
    // Överflödig användning av inline
    inline int kvadrat(int s) 
    {
        // Den här funktionen är redan inline.
        return 0;
    }
};

int main(void)
{

    return 0;
}