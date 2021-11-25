#include <iostream>

class Int
{
    private:
        //denna är osynlig utanför klassen
        int resultat;
    public:
        //Lägger ihop båda Int som lagras i 'resultat'
        void addera(Int a,Int b)
        {
            resultat=a.resultat+b.resultat;
        }
        //skriver ut värdet i resultat
        void visa(void)
        {
            std::cout<<resultat<<std::endl;
        }
        Int(int k)
        {
            //this är alias/pekare till klassens variabel resultat där värdet av k kommer lagras
            this->resultat=k;//eller Int::resultat=k;
        } 
};



//Main börjar
int main(void)
{
    //Nu deklareras och initieras 3 Int
    Int första=6;
    Int andra=7;
    //sätter värde till 0 då här kommer lagras summan från första och andra
    Int tredje=0;
    tredje.addera(första, andra);
    std::cout<<"Int3= ";
    tredje.visa();
    return 0;
}