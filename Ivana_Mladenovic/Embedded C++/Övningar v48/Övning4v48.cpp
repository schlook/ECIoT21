#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

class Temperatur
{
    public:
        void läggIn()
        {
            //deklarerar variabler
            string dag, månad; 
            double klockslag, temperatur;
            char svar;
            cout<<"Lägg in information om"<<endl;
            //så länge det är sant körs while-loopen
            while(true)
            {
                cout<<"Dag: ";
                cin>>dag;
                cout<<"Månad: ";
                cin>>månad;
                cout<<"Klockslag: ";
                cin>>klockslag;
                cout<<"Tempratur: ";
                cin>>temperatur;
                cout<<endl;
                //emplace_back lägger in flera element ihop längst bak i vektorn
                temp.emplace_back(dag, månad, klockslag, temperatur);
                cout<<"Vill du lägga in info om fler dagar? (j/n)"<<endl;
                cin>>svar;
                //om användaren skriver 'n' för nej
                if(toupper(svar=='n'))
                {
                    //avbryter while loopen
                    break;
                }
            }
            
        }
        void utskrift()
        {
            //skriver ut alla sammansatta element ur temp
            //alltså för varje varv i loopen skriver ut en grupp element
            for(auto &t : temp)
            {
                cout<<get<0>(t)<<", "
                    <<get<1>(t)<<", "
                    <<get<2>(t)<<", "
                    <<get<3>(t)<<endl;
            }
        }

    private:
        //med hjälp av tuple kan flera olika datatyper lagras i en vektor
        //på så sätt skapas en grupp av flera element
        //ska lagra dag, månad, klockslag samt temperatur
        vector<tuple<string, string, double, double>> temp;
};

int main(void)
{
    //deklarerar klass objekt
    Temperatur t1;
    t1.läggIn();
    t1.utskrift();
    return 0;
}