#include <iostream>

void printNågot(const char *något)
{
    std::cout << något << std::endl;
}

void printNågot(const char *något, int antal)
{
    for (int i = 0; i < antal; i++)
    {
        std::cout << något << std::endl;
    }
}

void printNågot(const char *något, int antal, int override)
{
    for (int i = 0; i < antal; i++)
    {
        if (override == 1)
        {
            std::cout << "NEJ!" << std::endl;
        }
        else
        {
            std::cout << något << std::endl;
        }
    }
}
int main(void)
{
    printNågot("tjenare", 5, 1);
    return 0;
}