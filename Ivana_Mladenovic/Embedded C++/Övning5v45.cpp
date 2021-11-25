#include <iostream>
//deklarerar funktionen och sätter standardvärde på p 
double Potens(double n, int p=2);

double nummer, resultat;
int potens;
int main(void)
{
    std::cout<<"Ange ett nummer: "<<std::endl;
    std::cin>>nummer;
    char svar;
    std::cout<<"Vill du själv ange potens? J / N"<<std::endl;
    std::cin>>svar;
    if(svar=='J')
    {
        std::cout<<"Ange potens: "<<std::endl;
        std::cin>>potens;
        resultat=Potens(nummer,potens);
    }
    else if(svar=='N')
    {
        //tar emot bara värde för nummer, p har standardvärde
        resultat=Potens(nummer);
    }
    else
    {
        std::cout<<"Felaktigt val!"<<std::endl;
    }
    std::cout<<"Resultatet är "<<resultat<<std::endl;
    return 0;
}
double Potens(double n, int p)
{
    //Sätter värdet på summan till 1 för att kunna multiplicera,
    //om värdet blir 0 blir det fel resultat
    //första loop 1*n blir n, andra loop blir n*n
    double summa=1.0;
    for (int i = 0; i < p; i++)
        {
            summa*=n;
        }
    return summa;
}