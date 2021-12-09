#include <iostream>
#include <cmath>

class Form
{
    protected:
        int x,y;

    public:
        void put_Value(int a, int b = 1) // b has now a Default argument
        {
            this->x = a;
            this->y = b;
        }

        /*void put_Value(double c)    // Overloading method....?
        {
            this->x = c;
        } */

        void show_Area()
        {
            std::cout << "...No Values To Show..." << std::endl;
        }

        void show_Value() // lol?
        {
            if (y == 1)
            {
                std::cout << "X = " << x << std::endl;
            }
            else
            {
                std::cout << "X = " << x << "\t" << "Y = " << y << std::endl;
            }
        }
};

class Triangle : public Form // A  = (base · heigth) / 2  - heigth 10, Base 4
{
    public:
        int show_Area()
        {
            int area = ((x*y)/2); 
            return area;
        }
};

class Square : public Form  // A = b*h - 10x5
{
    public:
        int show_Area()
        {
            int area = x * y; // x Base, y Heigth.
            return area;
        }
};

class Circle : public Form  // A = π r2 - r = 9
{
    public:
        double show_Area()
        {
            double area = M_PI * pow(x,2);  // Including Cmath for easier calculating. x = r.
            return area;
        }
};

int main()
{
    Triangle triangle1;     // Intentating(?) all objects...
    Square square1;
    Circle circle1;
    Form form1;

    std::cout << "Triangle1" << std::endl;
    triangle1.put_Value(10,4);
    triangle1.show_Value();
    std::cout << "The area of Triangle1 is : "<< triangle1.show_Area() << std::endl;
    std::cout << std::endl;

    std::cout << "Square1" << std::endl;
    square1.put_Value(10,5);
    square1.show_Value();
    std::cout << "The area of Square1 is : "<< square1.show_Area() << std::endl;
    std::cout << std::endl;

    std::cout << "Circle1" << std::endl;
    circle1.put_Value(9.0);
    circle1.show_Value();
    std::cout << "The area of Circle1 is : "<< circle1.show_Area() << std::endl;
    std::cout << std::endl;

    std::cout << "Form1" << std::endl;
    form1.put_Value(1,2);
    form1.show_Value();
    form1.show_Area();      // returns nothing. Text only.

    return 0;
}