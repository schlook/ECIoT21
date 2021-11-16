#include <iostream>

class tittarPåTv
{
    private:
        int a, b;

    public:
        tittarPåTv(void)
        {
        }
        // metod
        int add(int a, int b)
        {
            int c;
            this->a = a;
            this->b = b;
            c = this->b;

            return this->a + this->b;
        }
        int add();
};

int tittarPåTv::add()
{
    this->a = this->b - 1;

    return this->b;
}

// Vet inte med säkerhet.
inline void skrivNummer(void)
{
    std::cout << 12435;
}

int main(void)
{
    X x;
    x.add(12, 33);
    skrivNummer();
    return 0;
}