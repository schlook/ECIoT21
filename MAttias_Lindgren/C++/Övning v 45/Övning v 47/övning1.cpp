#include <iostream>
#include <string>

class music
{

public:
 std::string artist;
   
    void sätt_titel(std::string titel)
    {
         artist = titel ;
    } 

     std::string hämta_titel()
    {
        return artist ;
    }

};


int main()
{
   music titel1, titel2, titel3, title4, title5; 
    std::cout << "                    V\x84lkommen till EC Jul Billboard!" << std:: endl << std::endl ;
    std :: cout << "                  Brace yourself christmas is coming...\n" << std::endl;
    titel1.sätt_titel("          1. Mariah Carey - All i want for christmas is you");
    titel2.sätt_titel("                      2.Wham! - Last christmas");
    titel3.sätt_titel("                 3.Jose Feliciano - Feliz navidad");
    title4.sätt_titel("        4.Frank Sinatra - Let it snow!Let it snow!Let it snow!");
    title5.sätt_titel("                   5.Bing Crosby- White christmas");

    std::cout << titel1.hämta_titel() << std::endl << std::endl;
    std::cout << titel2.hämta_titel() << std::endl << std::endl;
    std::cout << titel3.hämta_titel() << std::endl << std::endl;
    std::cout << title4.hämta_titel() << std::endl << std::endl;
    std::cout << title5.hämta_titel() << std::endl << std::endl;
    return 0;
}