#include <iostream>

// Måste inte vara en del av en klass.
inline int max(int x, int y)
{
    return (x > y) ? x : y;
}

// Huvudfunktionen av programmet
int main()
{
    std::cout << "Max (20, 10): " << max(20, 10) << std::endl;
    std::cout << "Max (0, 200): " << max(0, 200) << std::endl;
    std::cout << "Max (100, 1010): " << max(100, 1010) << std::endl;

    return 0;
}