#include <iostream>

class Box
{
    double bredd;

public:
    friend void skrivBredd(Box box);
    void sättBredd(double wid);
};

void Box::sättBredd(double wid)
{
    this->bredd = wid;
}

// Notera att skrivBredd inte är en del av någon klass!
void skrivBredd(Box box)
{
    // eftersom skrivBredd är en vän/friend till Box kan den nå vilka medlemmar som helst
    std::cout << "Bredd på box : " << box.bredd << std::endl;
}

// Huvudprogrammet
int main()
{
    Box box;

    // Sätt bredd
    box.sättBredd(10.0);

    // Använd friend-funktionen.
    skrivBredd(box);

    return 0;
}