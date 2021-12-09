#include <iostream>

class Billboard
{      
    std::string titel;
    
    public:
        Billboard(std::string titel)
        {
             // hmm       
        }

        void sättTitel(std::string titel_)
        {
            this->titel = titel_;
        }

        std::string hämtaTitel()
        {
            return titel;
        }

};


int main()
{

    Billboard Tjabba("Tjabba");
    Tjabba.sättTitel("Tjena");

    std::cout << Tjabba.hämtaTitel() << std::endl;

    return 0;
}