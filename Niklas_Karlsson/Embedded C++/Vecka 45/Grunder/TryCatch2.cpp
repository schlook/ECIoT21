#include <iostream>
#include <exception>

// Varje program måste ha en main()-funktion
int main(void)
{
    // vi försöker med något.
    try
    {
        int a = 23;

        std::cout << a + 32 << std::endl;

        try
        {
            a = 0;
            
            if (a < 0)
            {
                throw 0;
            }
        }
        catch (int n)
        {
            throw;
        }
    }
    catch(std::exception &e)
    {
        std::cout << "Ett fel inträffade. Nånting " << e.what() << std::endl;
    }
    // vi säger fortfarande till operativsystemet
    // att allt gick bra när programmet avslutades.
    return 0;
}