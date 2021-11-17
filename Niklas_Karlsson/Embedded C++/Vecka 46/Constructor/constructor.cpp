#include <iostream>

class X
{
    int a, b, c, d;
public:
    X(int d, int e, int f, int g) : a(d), b(e), c(f), d(g)
    {
        this->skrivutD();
    }

    void Y(int d, int e, int f, int g)
    {
        this->a = d;
        this->b = e;
        this->c = f;
        this->d = g;
    }

    void skrivutD()
    {
        std::cout << "d = " << this->d;
    }
};

int main(void)
{
    X mittlillaX(12, 33, 55, 13);
    X mittstoraX(15, 22, 11, 66);

    mittstoraX.Y(11, 22, 33, 1);
    mittstoraX.skrivutD();

    return 0;
}