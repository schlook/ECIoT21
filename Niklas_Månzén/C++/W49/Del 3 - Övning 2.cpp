#include <iostream>
#include <algorithm>

void highest_low_value(int array[])
{
    int small = array[0];   // tilldelar small element 0 från array

    for (int  i = 0; i < 5; i++)    // loopar igenom hela arrayen tills villkoret uppfylls eller ej.
    {
        if(small > array[i])
        {
            small = array[i];   // Om small är större än array[i] tilldelas small ett nytt värde. 
        }
    } // "Är 2 större än 3? NO. Är 3 större än 2? JA, då får small ett nytt värde ""

    std::cout << "L\x84gsta V\x84rde = " << small << std::endl; // oavsett vad som händer skrivs small ut

    int large = array[0];   // Tilldelar large element 0 från array
    
    for (int  i = 0; i < 5; i++)    // Loopar igenom hela tills villkoret uppfylls
    {
        if(large < array[i]) // "Är 100 mindre än 200? JA. Då får large ett nytt värde" 
        {
            large = array[i];   // Om large är mindre än array[i] tilldelas large ett nytt värde
        }
    }

    std::cout << "H\x94gsta V\x84rde = " << large <<  std::endl;    // oavsett vad skriver vi ut large!
    
}

int main()
{
    int even[] = {50,40,30,20,10};
    int odd[] = {45, 35, 25, 15, 5};

    std::cout << "---Even Array---" << std::endl;
    highest_low_value(even);

    std::cout << "---Odd Array---" << std::endl;
    highest_low_value(odd);

    return 0;
}