//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :
// Input 	     :
// Output 	     :
// Description   :
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<conio.h>
using namespace std;

class Base1
{
    public:
        int a, b;

        Base1()
        {
            a = 10; b = 20;
            cout << "\n Base1 :: Constructor..." << endl;
        }

        ~Base1()
        {
            cout << "\n Base1 :: Destructor..." << endl;
        }

};

class Base2
{
    public:
        int a, b;

        Base2()
        {
            a = 50; b = 100;
            cout << "\n Base2 :: Constructor..." << endl;
        }

        ~Base2()
        {
            cout << "\n Base2 :: Destructor..." << endl;
        }

};

class Base3
{
    public:
        int a, b;

        Base3()
        {
            a = 750; b = 1250;
            cout << "\n Base3 :: Constructor..." << endl;
        }

        ~Base3()
        {
            cout << "\n Base3 :: Destructor..." << endl;
        }

};

class Derived : public Base2, public Base1, public Base3
{
    public:
        int x, y, z;

        Derived()
        {
            x = y = z = 0;
            cout << "\n Derived :: Constructor..." << endl;
        }

        ~Derived()
        {
            cout << "\n Derived :: Destructor..." << endl;
        }
};

// Main function for the program
int main( )
{
    Derived dObj;

    cout<< endl << sizeof(dObj);

    cout<< endl << dObj.x;
    cout<< endl << dObj.y;
    cout<< endl << dObj.z <<endl;

    cout<< endl << dObj.Base1::a;
    cout<< endl << dObj.Base2::a;
    cout<< endl << dObj.Base3::a;

    getch();
    return 0;
}
