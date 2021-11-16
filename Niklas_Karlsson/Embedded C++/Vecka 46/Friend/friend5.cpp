#include <iostream>
#include <string>

// Glassbar
class Bar
{
    friend class Foo;
    friend class Foo;

private:
    std::string m_namn;

public:
    Bar(std::string namn) : m_namn(namn)
    {
    }
    friend void enFunktion();
    friend void annanFunktion();
    void tredjeFunktion();
};

inline void Bar::tredjeFunktion()
{

}

class Foo
{
    public:
        std::string m_namn;
        void ändraNamn(Bar bar)
        {
            bar.m_namn = "Jens";
        }
};

class Baz
{
public:
    std::string m_namn;
    void ändraNamn(Bar bar)
    {
        bar.m_namn = "Jens";
    }
};

int main(void)
{
    Foo foo;
   
    return 0;
}