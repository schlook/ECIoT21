#include <iostream>
#include <vector>

int main()
{

    std::vector<std::string> minaStrings =  // Tilldelar värden direkt istället för pushback!
    {"Hejsan,", " Hoppsan,", " Fallerallera,", " n\x84r", " julen", " kommer",
     " ska", " varenda", " unge", " vara", " GLAD!..."};

    for (auto i : minaStrings) // Kör en loop genom auto. Sjukt mycket smidigare.
    {
        std::cout << i;
    }
    
    std::cout  << std::endl; // Kör en vanlig rackare!

    for (int i = 0; i < minaStrings.size(); i++)
    {
        std::cout << minaStrings[i];
    }

    minaStrings.push_back("...TJABBA"); // testar pushback.
    std::string minaRackare = ("...TJENA");
    minaStrings.push_back(minaRackare);

    std::cout  << std::endl;

    std::cout << minaStrings[minaStrings.size()-2]; // Leker med size!
    std::cout << minaStrings[minaStrings.size()-1];

    std::cout  << std::endl;

    std::cout << minaStrings.size(); // skriver ut vectorens riktiga size ( \0 )

    minaStrings.pop_back();
    minaStrings.pop_back(); // Leker med pop back och tar bort de 2 senaste

    std::cout  << std::endl;
    
    for (int i = 0; i < minaStrings.size(); i++) // Loopar ut igen!
    {
        std::cout << minaStrings[i];
    }
    
    std::cout  << std::endl;
    std::cout << minaStrings.size(); // skriver ut sizen igen ( \0 )

    return 0;   
}