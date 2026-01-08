using namespace std;
#include<iostream>
#include<conio.h>

class Circle
{
    public :
            float Rad, Area, Circumference;             // Non Constant Characteristics
            const float Pi;                             // Constant Characteristics
            float &CF;

            Circle();                                   // Default Constructor -- Declaration
            Circle(float);                              // Parameterized Constructor -- Declaration

            void Area_Of_Circle();                      // Member Functions or Behavior -- Declaration
            void Circumference_Of_Circle();

            ~Circle();                                  // Destructor -- Declaration
};

Circle :: Circle() : Rad(0.0), Pi(3.14), CF(Circumference)                 // Default Constructor -- Definition  =>=>  With Member Initialization List
{
    Area = 0.0;
    CF = 0.0;

    cout << "\n Inside Default Constructor!!!" << endl;
}

Circle :: Circle(float f_Rad) : Pi(3.14), Area(0.0), CF(Circumference)     // Parameterized Constructor -- Definition  => =>  With Member Initialization List
{
    Rad = f_Rad;
    CF = 0.0;

    cout << "\n Inside Parameterized Constructor!!!" << endl;
}

void Circle :: Area_Of_Circle()                         // 1st Member Function -- Definition
{
    Area = Pi * Rad * Rad;
}

void Circle :: Circumference_Of_Circle()                // 2nd Member Function -- Definition
{
    CF = 2 * Pi * Rad;
}

Circle :: ~Circle()                                    // Destructor -- Definition
{
    cout << " \n Inside Destructor for Object with Radius - " << Rad << endl;
}

int main()
{
        Circle cObj1;

        cout << "\n Enter Radius of Circle = ";
        cin >> cObj1.Rad;

        cObj1.Area_Of_Circle();

        cout << "\n Area of 1st Circle = " << cObj1.Area << endl;

        Circle cObj2(3.5);

        cObj2.Area_Of_Circle();

        cout << "\n Area of 2nd Circle = " << cObj2.Area << endl;

        cObj2.Circumference_Of_Circle();

        cout << "\n Circumference of 2nd Circle = " << cObj2.CF << endl;

        _getch();
        return 0;
}
