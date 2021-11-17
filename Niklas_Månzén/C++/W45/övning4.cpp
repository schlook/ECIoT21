#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

// En cirkels area är pi gånger radien i kvadrat (A = π r²)

double reknaUt(double radie)
{

    double area = M_PI * pow(radie,2.0);

    return area;
}


int main()
{
    
    cout << "Skriv in din Radie i cm, bitte : " << endl ;

    double radie;
    cin >> radie;

    cout << reknaUt(radie) << endl ;

    return 0;
}