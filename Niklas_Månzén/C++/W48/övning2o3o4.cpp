#include <iostream>
#include <vector>
#include <tuple>

class Temp //Övning 1
{
    private : 
        std::vector<double> tempPrivate;

    public:
        void inputVector()
        {
            std::cout << "~ Welcome! ~\nDo you wish to enter the Celsius temp. into the server? Y/N" << std::endl;
            char svar;
            std::cin >> svar;
            
            while (toupper(svar) != 'N')
            {
                std::cout << "Enter the C Temperature : ";
                double temp;
                std::cin >> temp;
                tempPrivate.push_back(temp);

                std::cout << "Continue? Y/N " << std::endl;
                std::cin >> svar;
            }
        }

        void printResults()
        {
            for (auto i : tempPrivate)
            {
                std::cout << i << "C" <<"\n";
            }
        }
};

class Pair //Övning 2
{
private:
    std::vector<std::pair<std::string, double>> pair;

public:
    void input_to_pair()// Metod for input till pair
    {
        std::cout << "~ Welcome to Pair! ~\nOn which day did you accomplished the record? : \n";
        std::string day;
        std::cin >> day;
        
        std::cout << "What was the lowest/highest Temp on that specific day? : \n";
        double temp;
        std::cin >> temp;

        pair.emplace_back(day,temp); // Ingen loop efter detta om att fortsätta.
    }

    void show_day_pair() // Använder mig av en for-auto
    {
        for (auto i : pair)
        {
            std::cout << i.first << " - " << i.second << "C\n"; // Skriver ut värdet (första & andra-datatypen) från pair
        }
    }
};

class Tempen //Övning 3
{
    private:
        std::vector<std::tuple<std::string, std::string, std::string, double>> tupp; 
        
    public:
        void inputTuple()
        {
            std::cout << "~ Welcome to Tuple! ~\nDo you wish to input some data?\nDay, Month, Time & Temp -  Y/N?" << std::endl;
            char svar;
            std::cin >> svar;
            
            while (toupper(svar) != 'N')
            {
                std::cout << "Enter The Day : ";
                std::string day;
                std::cin >> day;
            
                std::cout << "Enter The Month : ";
                std::string month;
                std::cin >> month;        

                std::cout << "Enter The Time : ";
                std::string time; // för att kunna använda 0or samt semikolon
                std::cin >> time;

                std::cout << "Enter The Temperature : "; 
                double temp;
                std::cin >> temp;

                tupp.emplace_back(day, month, time, temp); // Matar in användarens svar genom emplace.back()

                std::cout << "Continue? Y/N " << std::endl;
                std::cin >> svar;
            }
        }

        void show_tuple()
        {
            for (auto[a, b, c, d] : tupp)// Behöver -std=gnu++17 . Går att köra ändå genom vanlig kompilering. - g++ övning2o3o4.cpp -std=gnu++17 = Inga varningar.
            {   
                std::cout << a << " of " << b << " at " << c << ", the Temp was at : " << d << " Degrees Celsius." << std::endl;
            }
        }
};

int main()  // Intenterar objekt genom klasserna och kör dess metoder genom objekten.
{
    std::cout << "____________VECTOR_____________\n";
    Temp temp1;
    temp1.inputVector();
    std::cout << "\n...Printing Results...\n";
    temp1.printResults();

    std::cout << "____________PAIR_____________\n"; // Fjantar mig med fina linjer.
    Pair pair1;
    pair1.input_to_pair();
    std::cout << "\n...Printing Results...\n";
    pair1.show_day_pair();

    std::cout << "____________TUPLE_____________\n";
    Tempen tuple1;
    tuple1.inputTuple();
    std::cout << "\n...Printing Results...\n";
    tuple1.show_tuple();

    std::cout << "____________DAS \x8ENDE_____________\n"; // :)
    std::cout << "THANK YOU!";

    return 0;
}