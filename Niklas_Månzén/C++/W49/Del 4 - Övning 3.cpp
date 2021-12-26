#include <iostream>

/*Skriv ut det engelska alfabetet från A till Z
Kolla upp ASCII numret och loopa ut allt.

Exempel: A B C ... X YZ */

int main()
{
    
    std::cout << "The English Capital Letters Are : ";

    for (int i = 65; i <= 90; i++) // Dec 65 = A .... DEC 90 = Z Körde på stora bokstäverna endast!
    {
        char eng = i;   // Tilldelar eng en ny decimal varje gång!
        std::cout << eng << " " ;
    }
    
    return 0;
}