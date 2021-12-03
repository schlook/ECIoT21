#include <iostream> 
#include <cmath> // för att använda funktionen 'pow()'

#define PI 3.14159265359 // definierar PI

int main()
{
    float radie;
    float cirkelArea;

    std::cout << "Vad har cirkeln för radie?: " << std::endl;
    std::cin >> radie;
    /* (A = π r²) vi använder funktionen pow(bas, exponent), 
    pow() returnerar: 1a argumentet (bas) upphöjd med det 2a argumentet (exponent) */
    cirkelArea = pow(radie, 2) * PI; // pow körs, multiplicerar resultatet med PI och tilldelar resultatet till cirkelArea
    std::cout << "Cirkeln har cirkelarean = " << cirkelArea << std::endl;

    return 0;
}