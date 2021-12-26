#include <iostream>
#include <string>
#include <fstream>
#include <stdbool.h>
#include <algorithm> 
#include <stdexcept>
#include <exception>


int main()
{
    try // "Tryar" hela kodblocket
    {
        std::cout << "Are you a boy? If NO, we will assume you are a girl... : Y/N " << std::endl;
        std::string answer;
        std::cin >> answer;

        transform(answer.begin(), answer.end(), answer.begin(), ::toupper);    // Använder funktioner från algorithmbibliotek för att få till y eller Y tex

        if (answer == "Y") // POJKE
        {
            bool found = false;  // Istället för kön som booleans så tilldelar vi en "found"boolean till false

            std::cout << "State your name, boy : "  << std::endl;
            std::string name, input_name;
            int value;
            std::cin >> input_name;

            std::ifstream file ("pojknamn.txt"); 
            
            while (file >> name >> value) // Loopar igenom hela filen och tilldelar ifstream file -- name & value
            {
                if (name == input_name && value == 0)
                {
                    std::cout << "Santa Claus says that you have been naughty this year. No gifts for you!" << std::endl;
                    found = true;   // found blir nu true
                    break;
                }
                else if (name == input_name && value == 1)
                {
                    std::cout << "Santa Claus says that you have been NICE... Gifts for you! HO HO HOOO!" << std::endl;
                    found = true; // found blir nu true
                    break;
                }         
            }

            if(!found)  // Kommer inte komma in här om found = true. Annars gör den det.
            {
                throw std::invalid_argument("Your name is not on the list...Bad santa!");  
            }
            
            file.close(); // Stänger ned file
        }

        if (answer == "N") // FLICKA 
        {
            
            bool found = false;     // Samma kod som POJKE....

            std::cout << "State your name, girl : "  << std::endl;
            std::string name, input_name;
            int value;
            std::cin >> input_name;

            std::ifstream file ("flicknamn.txt"); 

            while (file >> name >> value)
            { 
                if (name == input_name && value == 0)
                {
                    std::cout << "Santa Claus says that you have been naughty this year. No gifts for you!" << std::endl;
                    found = true;
                    break;
                }
                else if (name == input_name && value == 1)
                {
                    std::cout << "Santa Claus says that you have been NICE... Gifts for you! HO HO HOOO!" << std::endl;
                    found = true;
                    break;
                } 
            }

            if(input_name != name)  // Testar en annan slags if här. Verkar fungera bra. om input_name is NOT name. Throw.
            {
                throw std::invalid_argument("Your name is not on the list...Bad santa!"); // Använder mig av invalid argument och throwar det.
            }

            file.close();   // Stänger ned file
        }      
    }

    catch(const std::exception& e) // Fångar min throw (invalid argument) genom en referens och skapar exception-objektet e 
    {
        std::cerr << e.what() << '\n'; // Använder mig av .what för att skriva ut texten som beskriver felet.
    }

    return 0;

}