using namespace std;
#include<iostream>
#include<conio.h>

class Circle
{
		public :
                float Rad, Area, Circum;

                Circle();
                Circle(float R);
                Circle(Circle &);

                void Area_of_circle();
                void Circumference_of_Circle();
                void Display_Details();

                ~Circle();

        private :
                float PI;
};

/// Constructors, Destructor & All Member Functions Definitions =>

Circle :: Circle()
{
    cout << "\n Inside Default Constructor of Circle Class\n";

    Rad = Area = Circum = 0;
    MobNo = 0;
    PI = 3.14;
}

Circle :: Circle(float R)
{
    cout << "\n Inside Parameterized Constructor of Circle Class\n";

    Rad = R;
    Area = Circum = 0;
    PI = 3.14;

    Area_of_circle();
    Circumference_of_Circle();
}

Circle :: Circle(Circle &cRef)
{
    cout << "\n Inside Copy Constructor of Circle Class\n";

    Rad = cRef.Rad;
    Area = cRef.Area;
    Circum = cRef.Circum;
    PI = 3.14;
}

void Circle :: Area_of_circle()
{
    Area = PI * Rad * Rad;
}

void Circle :: Circumference_of_Circle()
{
    Circum = 2 * PI * Rad;
}

void Circle :: Display_Details()
{
    cout<< "\n\n =======================*************===========================\n";

    cout << "\n Given Circle Details are => " << endl;

    cout << "\n Radius of Circle = " << this->Rad;
    cout << "\n Area of Circle = " << this->Area;
    cout << "\n Circumference of Circle = " << this->Circum;

    cout<< "\n\n =======================*************===========================\n";
}

Circle :: ~Circle()
{
    cout << "\n Inside Destructor of Circle Class Called By Object with Rad => " << this->Rad;
}

int main()
{
        Circle cObj1;
        Circle cObj2(5);

        getch();

        cObj1.Rad = 3;
        cObj1.Area_of_circle();
        cObj1.Circumference_of_Circle();
        cObj1.Display_Details();

        getch();
        cObj2.Display_Details();

        getch();

        Circle cObj3(cObj1);

        cObj3.Display_Details();

        getch();
        return 0;
}
