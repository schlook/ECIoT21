#include <iostream> 

//Bas klassen 
class person
{  
    //Ärvs till subb klasserna.
  public:
  std:: string roll;

  //Metoden.
  void sätt_roll(std::string r) {roll=r;} 
};
 
 //Ärvda klassen från bas klassen.
class Mamma:public person
{
public:
   
   //klassens egna metod. 
   void print()
   {
       std::cout << " Jag \x84r Mamma och heter " << roll << "." << std::endl;
   }
}; 

//Ärver ifrån bas klassen.
class dotter : public person
{ 
    public:


  void print_dotter()
  {
      std::cout <<" Jag \x84r dotter och heter " << roll << "." << std::endl;
  }
};


int main ()
{   Mamma mor;
    mor.sätt_roll("Alice");
    mor.print(); 
    
    // Deklarerar 2 objekt 
    dotter dotter1 , dotter2 ;
    dotter1.sätt_roll("Elina");
    dotter1.print_dotter(); 

    dotter2.sätt_roll("Lisa");
    dotter2.print_dotter();
    return 0;
}