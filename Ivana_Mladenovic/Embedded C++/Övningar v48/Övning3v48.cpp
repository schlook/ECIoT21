#include <iostream>
#include <vector>

using namespace std;

class Temperatur
{
    public:
    //konstruktor tar emot string och flyttal
        Temperatur(string dag, double sif)
        {
            //emplace_back lägger variablerna längst bak i vektorn
            temp.emplace_back(dag, sif);
        }
        //metoder
        void utskrift()
        {
            cout<<"Mätningar: "<<endl;
            //loppar igenom vektorn
            for (auto t : this->temp)
        {
            //med hjälp av first kallar man första variabeln tillhörande 'pair', second kallar på andra
            cout << "Veckodag: " << t.first << std::endl
                 << "Temperatur: " << t.second << std::endl;
        }
        }
    private:
        //med hjälp av pair kan vecktorn lagra två olika datatyper
        vector<pair<string, double>> temp;
};

int main(void)
{
    //tar emot dag och temperatur
    Temperatur t("Måndag", -4.3);
    t.utskrift();

    return 0;
}