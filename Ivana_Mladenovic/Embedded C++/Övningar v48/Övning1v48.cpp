#include <iostream>
#include <vector>
//för att slippa skriva std hela tiden
using namespace std;
int main(void)
{
    //deklarerar vektor
    vector <string> minVektor{};
    cout<<"Lägg till 5 ord: "<<endl;
    //för varje varv sparas ett ord i vektorn
    for(int i = 0; i < 5; i++)
    {
        string ord;
        cin>>ord;
        //push_back lägger värdet i variabeln längst bak i vektorn
        minVektor.push_back(ord);
    }
    cout<<"Du har sparat följande i vektorn: ";
    //skriver ut alla element i vektorn
    for (auto v : minVektor)
    {
        cout<<v<<" ";
    }
    
    return 0;
}