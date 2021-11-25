#include <iostream>


// våran Billboard.
class music
{
//Public innebär att det synligt för alla.
public:

 std::string artist;
   //Metoden för att sätta titel, artist sparas i titel.
    void sätt_titel(std::string titel)
    {
         artist = titel ;
    } 
   //Metod för att hämta titel , returnerar artist.
     std::string hämta_titel()
    {
        return artist ;
    }

};


int main()
{// Billboarden har 5 låtar. titel1, titel2, titel 3, etc ...
   music titel1, titel2, titel3, title4, title5; 
    std::cout << "                    V\x84lkommen till EC Jul Billboard!" << std:: endl << std::endl ;
    std :: cout << "                  Brace yourself christmas is coming...\n" << std::endl;

    //Kallar på metoden sätt_titel och tilldelar titel1 med texten...
    titel1.sätt_titel("          1. Mariah Carey - All i want for christmas is you");
    titel2.sätt_titel("                      2.Wham! - Last christmas");
    titel3.sätt_titel("                 3.Jose Feliciano - Feliz navidad");
    title4.sätt_titel("        4.Frank Sinatra - Let it snow!Let it snow!Let it snow!");
    title5.sätt_titel("                   5.Bing Crosby- White christmas");
    
    //Anropar hämta_titel med vald titel och skriver sedan ut vad metoden returnerar.
    std::cout << titel1.hämta_titel() << std::endl << std::endl;
    std::cout << titel2.hämta_titel() << std::endl << std::endl;
    std::cout << titel3.hämta_titel() << std::endl << std::endl;
    std::cout << title4.hämta_titel() << std::endl << std::endl;
    std::cout << title5.hämta_titel() << std::endl << std::endl;
    return 0;
}