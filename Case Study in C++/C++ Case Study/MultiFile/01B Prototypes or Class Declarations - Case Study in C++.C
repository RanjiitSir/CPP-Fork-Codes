using namespace std;
#include<iostream>
#include<conio.h>
#define Pi 3.14

class Circle
{
    private :
            float Rad;

    public :
            float Area, Circum;

            Circle();

            Circle(float);

            Circle(Circle &);

            ~Circle();

            void Accept_Radius();

            void Area_Of_Circle();

            void Circumference_Of_Circle();
};

class Rectangle
{
    private :
            float Length, Breadth;

    public :
            float Area, Perimeter;

            Rectangle();

            Rectangle(float, float);

            Rectangle(Rectangle &);

            ~Rectangle();

            void Accept_Sides();

            void Area_Of_Rectangle();

            void Perimeter_Of_Rectangle();
};

class Square
{
    private :
            float Side;

    public :
            float Area, Perimeter;

            Square();

            Square(float);

            Square(Square &);

            ~Square();

            void Accept_Side();

            void Area_Of_Square();

            void Perimeter_Of_Square();
};
