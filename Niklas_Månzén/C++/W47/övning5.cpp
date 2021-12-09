#include <iostream>
#include <vector>
#include <string>

class Telefonbok
{
    std::vector <std::string> telefonnummer;
    std::vector <std::string>namn;

    public:
        Telefonbok()
        {
            std::cout << "......................." << std::endl;
        }
        ~Telefonbok()
        {
            std::cout << "......................." << std::endl;
        }
        
        void laggTill(std::string telefonnummer_, std::string namn_)
        {
            telefonnummer.push_back(telefonnummer_);    // Tilldelar värdet som passas in längst bak i vektorerna.
            namn.push_back(namn_);
            std::cout << telefonnummer.back() << " med namn: " << namn.back() <<" INLAGT..." << std::endl;  //Skriver ut det senaste som lades till.. .back()
        }

        void kollaUpp(std::string telefonnummer_, std::string namn_)    // Loopar igenom vector telefonnummer! Och iffar!
        {
            for (int i = 0; i < telefonnummer.size(); i++)  // .size() är storleken på vectoren. Exakt & precis. 
            {
                if (telefonnummer[i] == telefonnummer_ && namn[i] == namn_) // Finns det vi passar in i vektorerna?
                {
                    std::cout << telefonnummer_ << "\t" << namn_ << "\n";
                    return;
                }
                
            }

            std::cout << "Ingen matchning!"  << std::endl;   // Skulle gärna vilja ha om man bara passade in ett värde i kollaUpp
                                                            // Så att det tillhörande numret visas.
        }

        void taBort(std::string telefonnummer_, std::string namn_)      
        {
            std::vector<std::string>::iterator j = namn.begin();        // Testade mig på iteratorloop med min väns hjälp :)
            
            for (std::vector<std::string>::iterator i = telefonnummer.begin(); i != telefonnummer.end(); i++) 
                            // Istället för en vanlig int, så kör vi loopen genom att gå igenom dess minnesadress istället. .begin() & .end() hänvisar till adresser.
            {
                if ((*i) == telefonnummer_) 
                {
                    telefonnummer.erase(i);
                    namn.erase(j);          // erase i Där telefonnummret är, är också tillhörande namn fast i den andra vectoren.
                    std::cout << "Telefonnummer: " << telefonnummer_ << " med namn: " << namn_ <<" BORTTAGET..." << std::endl;
                    return;
                }
                j++;    // Plussar på j så den också hänger med i samma "räkning" som i
            }
            
            std::cout << "Ingen matchning!"  << std::endl;   
            
        }
};

int main(void)
{
    Telefonbok user1;

    user1.laggTill("0736931215","Niklas M\x86nzen");   // Lägger till

    user1.laggTill("0704433225","Eva Bengtsson");   

    user1.kollaUpp("0736931215","Niklas M\x86nzen");   // Kollar upp

    user1.kollaUpp("0704433225","Eva Bengtsson");

    user1.kollaUpp("0736931216","Niklas M\x86nzan");    //Kollar upp igen. Skriver fel med flit för att kolla om metoden fungerar som den ska.

    user1.taBort("0736931215","Niklas M\x86nzen");     // Tar bort

    user1.kollaUpp("0736931215","Niklas M\x86nzen");   // Kollar upp igen för att kolla om metoden fungerar som den ska.

    return 0;
}