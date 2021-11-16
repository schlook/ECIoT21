#include <iostream>

int dividera(double a, double b);

int main(void)
{
    try
    {
        if (!dividera(0, 12))
        {
            std::cout << "Hurra vi lyckades!!" << std::endl;
        }
    }
    catch (const char *exceptionMeddelandet)
    {
        std::cerr << "Fångade: " << exceptionMeddelandet << std::endl;
    }
    catch (int någonAnnanVariabel)
    {
        std::cerr << "Fångade: " << någonAnnanVariabel << std::endl;
    }
    
    return 0;
}

int dividera(double a, double b)
{
    if (a == 0)
    {
        throw 1112;
    }

    return (a / b);
}