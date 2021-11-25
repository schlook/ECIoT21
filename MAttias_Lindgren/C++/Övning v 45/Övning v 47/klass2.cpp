#include <iostream> 

int ålder ;

class age
{ 
 public:
  std::string artist;
  
  void kollaÅlder ()
   {
       try
       {    
           std::cout << " Var god och ange din ålder..." << std::endl;
           std::cin >> ålder ; 

           if (ålder <= 18)
           {
               throw ålder;
           }
           else if (ålder > 18)
           {
              std::cout << " HURRA! DU \x84r 18+ .." << std::endl;
           }
           
       }
       catch(int ålder)
       {
           std::cout << " Du \x84r f\x94r d\x86lig f\x94r kasta sten... " << std::endl;
       }
       
   }
};


int main(void)

{  
    age ålder;
    for (int i = 0; i < 5; i++)
    {
       ålder.kollaÅlder();

    }
    
      
    
   
}