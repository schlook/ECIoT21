#include <iostream>
#include <time.h> 
#include <string>
#include <iomanip>

class djur
{    
public:
  djur (int u = 1, int h = 1 ): utråkad (u), hungrig (h) {srand(time(NULL)); }
  void tala();
  void leka (int =5 ); 
  void mata (int = 5); 
  void gör_ett_trick ();
private :
 static const int NHUMÖR = 5; 
 static const std::string HUMÖR [NHUMÖR] ; 
 static const int NTRICK = 3 ; 
 static const std::string sTRICKS [NTRICK] ;

 int utråkad , hungrig ; 
 std::string getMood(); 
 void passTme(int=1); 

};
class katt : public DäggDjur
{
    public:
        void hämtaNamn(std::string n){std::cout<<"Namn: "<<n<<std::endl;}
        void ljud(){std::cout<<"katt pratar: Meow!"<<std::endl;}
        void kön(std::string k){std::cout<<"Kön: "<<k<<std::endl;}
        void hämtaÅlder(int n){std::cout<<"Ålder: "<<n<<std::endl;}
        void hämtaVikt(float kg){std::cout<<"Vikt: "<<kg<<"kg"<<std::endl;}
};


const std::string djur::HUMÖR[NHUMÖR] = {"GLAD" , "LEDSEN" , "ARG" , "TAGGAD" , "ZZZ"}; 
const std::string djur::sTRICKS[NTRICK] = {"HOPPAR", "KULLERBYTTA", "JONGLERAR"};

int AVSLUTA = 0 ;


 std::string djur::getMood()
{
  std::string humör= HUMÖR[rand()%NHUMÖR];
  return humör;
}

void djur::passTme(int t)
{
  hungrig += t ;
  utråkad += t ;

}


int meny()
{   
    int val;
     
    do
    {
    std::cout << std::setw(32) << "   1...Lyssna" << std:: endl;
    std::cout << std::setw(32) << "   2...Leka\n";
    std::cout << std::setw(32) << "   3...Mata\n" ;
    std::cout << std::setw(32) << "        4...G\x94r ett trick\n";
    std::cout << std::setw(32) << "   0...Avluta\n";
    
    std::cout << std::endl;
    std::cout << std::setw(32) << "G\x94r ett val...";
    std::cin >> val;
    return val;
     } while (val< 0 || 4 >val);
     return val;
}

void djur::tala ()
{
std::cout << std::setw(32) <<"jag \x84r " << getMood() << std::endl << std::endl; 

} 

void djur::mata(int mat)
{
  hungrig -= mat; 
  if (hungrig<0) hungrig= 0; 

}

void djur::leka(int l)
{
    std::cout << std::setw(32) <<"                  DET H\x84R \x84R KUL!...\n" ;
    utråkad -= l;
    if (utråkad<0) utråkad = 0;
} 

void djur::gör_ett_trick()
{
    std::string HUMÖR = getMood();
    utråkad++;

    if (HUMÖR !="ARG")
    {
       std::string mittTRICK = sTRICKS[rand()%NTRICK]; 
        std::cout << std::setw(32) << "    TITTA VAD JAG KAN!    " << mittTRICK <<'\n';
    }
    else
    {
        std::cout << std::setw(32) << "     GRR! ..INGET TRICK N\x84R JAG \x84R ARG!!\n" ;
    }
}

void katt()
{
    
}

int main (void)
{
  
  std::cout << std::setw(32) <<"               HEJ!\n" ;
  std::cout << "                 V\x84LKOMMEN TILL EC TAMAGOTCHI!\n" << std::endl;
     
    
    djur *katt; 
    katt = new djur;

    int val ; 
    do
    {
        val = meny();
        std::cout << std::endl;
        std::cout << "                     Val är nu " << val << std:: endl;
        if (val == 0) std::cout << "                        Hejd\x86..\n";
        else if (val == 1) katt-> tala();
        else if (val == 2) katt-> leka();
        else if (val == 3) katt->mata();
        else if (val == 4) katt->gör_ett_trick();
        else std::cout << "F\x94rs\x84k igen!" << std::endl;
    } while (val != AVSLUTA );
    
     delete katt;
     return 0;
} 

