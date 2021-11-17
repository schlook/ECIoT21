#include <iostream>

class Foos
{
public:
    friend Foos duÄrMinKompis();
    void ärDuVerkligenKompis();
    friend Foos jaVisst();

private:
    int hemligaklubben;
    double tre;
};

void Foos::ärDuVerkligenKompis()
{
    std::cout << "Kolla vi är kompisar?" << std::endl;
}

Foos jaVisst()
{
    Foos foo;
    std::cout << "Ja visst!" << std::endl;

    return foo;
}

Foos duÄrMinKompis()
{
    Foos foo;
    foo.ärDuVerkligenKompis();

    return foo;
}

int main(void)
{
    duÄrMinKompis();
    jaVisst();

    return 0;
}
