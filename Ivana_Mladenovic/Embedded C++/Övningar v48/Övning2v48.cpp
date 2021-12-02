#include <iostream>
#include <vector>

using namespace std;

class Temperatur
{
    public:
        void läggIn()
        {
            double t;
            char svar;
            cout<<"Lägg in temperatur: ";
            //så länge det är sant
            while(true)
            {
                //temperaturer sparas i temporär 't'
                cin>>t;
                //varje ny läggs längst bak i vektorn
                temp.push_back(t);
                cout<<"Vill du lägga in fler?(j/n)";
                //svar j eller nej sparas i 'svar'
                cin>>svar;
                //om svar är n eller N går vi ut ur loopen
                if(svar=='n' || svar=='N')
                    break;//avbryter loopen
            };
        }
        void visa()
        {
            cout<<"Du la in följande temperaturer: "<<endl;
            //skriver ut innehållet från vektorn
            for (auto t : temp)
            {
                cout<<t<<endl;
            }
            
        }
    private:
        vector <double> temp;
};

int main(void)
{
    //klass instans 't'
    Temperatur t;
    //metod för att lägga in temperaturer
    t.läggIn();
    //metod för utskrift
    t.visa();
    return 0;
}