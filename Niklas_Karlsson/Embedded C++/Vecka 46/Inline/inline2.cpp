#include <iostream>

class X
{
public:
    // Deklarera funktionen som vanligt
    int kvadrat(int s);
};

// använd inline
inline int X::kvadrat(int s)
{
    return s;
}

int main(void)
{
    X x;
    std::cout << x.kvadrat(777) << std::endl;
   
    return 0;
}
