#include <iostream>

class Form
{
    public:
        virtual int hämtaArea() = 0;
        void sättBredd(int b)
        {
            this->bredd = b;
        }

        void sättHöjd(int h)
        {
            this->höjd = h;
        }
    protected:
        int bredd;
        int höjd;
};

// Äver från form
class Rekangel : public Form
{
    public:
        int hämtaArea()
        {
            return (bredd * höjd);
        }
};

// Triangel, ärver från form.
class Triangel : public Form
{
public:
    int hämtaArea()
    {
        return (bredd * höjd) / 2;
    }
};


int main(void)
{
    Rekangel Rekt;
    Triangel Tri;

    Rekt.sättBredd(5);
    Rekt.sättHöjd(7);

    // Print the area of the object.
    std::cout << "Totala rektangel arean är: " << Rekt.hämtaArea() << std::endl;

    Tri.sättBredd(5);
    Tri.sättHöjd(7);

    // Print the area of the object.
    std::cout << "Totala triangel arean är: " << Tri.hämtaArea() << std::endl;

    return 0;
}