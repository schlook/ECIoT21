#include <iostream>
#include <vector>

using namespace std;
//deklarerar och initierar en vektor
vector<double> minVektor {12.3, 5.0, 34.6};

int main(void)
{
    cout<<"Skriver ut värden ur vektorn: "<<endl;
    //skriver ut ett element ur vektorn för varje loop
    for (auto v : minVektor)
    {
        cout<<v<<endl;
    }

    cout<<"Lägg in 3 nya värden i vektorn:  "<<endl;
    for (int i = 0; i < 3; i++)
    {
        //temporär variabel
        double variabel;
        //inmatning sparas i 'variabel'
        cin>>variabel;
        //värdet i variabeln läggs längst bak i vektorn
        minVektor.push_back(variabel);
    }
    cout<<"Skriver ut alla värden ur vektorn: "<<endl;
    for (auto v : minVektor)
    {
        cout<<v<<endl;
    }

    return 0;
}