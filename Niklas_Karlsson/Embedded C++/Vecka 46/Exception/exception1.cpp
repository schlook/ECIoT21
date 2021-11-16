#include <iostream>
#include <string>
#include <exception>

int main(void)
{
    int ålder;
    try
    {
        std::cout << "Ange din ålder" << std::endl;
        std::cin >> ålder;

        if (ålder >= 18)
        {
            std::cout << "Tillgång beviljad - du är gammal nog";
        }
        else
        {
            if (ålder > 15 && ålder < 18)
            {
                std::cout << "Nästan okej" << std::endl;
            }
            else if (ålder < 15)
            {
                throw 12.3;
                // throw "Du är inte tillräckligt gammal ändå";
            }
            else
            {
                throw 12.3;
            }
        }
    }
    // mittNum kan heta vad som helst
    catch (int mittNum)
    {
        std::cerr << "Tillträde beviljas ej - Du måste vara 18 år eller äldre" << std::endl;
        std::cerr << "Felkod: " << mittNum;
    }
    catch (const char *minSträng)
    {
        std::cerr << minSträng << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "HEHEHE " << e.what() << std::endl;
    }

    return 0;
}