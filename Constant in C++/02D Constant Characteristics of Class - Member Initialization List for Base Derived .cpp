using namespace std;
#include<iostream>
#include<conio.h>

class Base
{
    public :
            int N1, N2;

            Base(int x, int y)                           // Base - Parameterized Constructor
            {
                N1 = x;
                N2 = y;

                cout << "\n Inside Base - Parameterized Constructor!!!" << endl;
            }

            ~Base()                                         // Base - Destructor
            {
                cout << " \n Inside Base Destructor - " << N1 << endl;
            }
};

class Derived : public Base
{
    public :
            int N3;

            Derived() : Base(50, 101)                                          // Derived - Default Constructor
            {
                N3 = 21;

                cout << "\n Inside Derived - Default Constructor!!!" << endl;
            }


            Derived(int c) : Base(500, 101)                                  // Derived - Parameterized Constructor
            {
                N3 = c;

                cout << "\n Inside Derived - Parameterized Constructor!!!" << endl;
            }

            ~Derived()                                                      // Derived - Destructor
            {
                cout << " \n Inside Derived Destructor - " << N3 << endl;
            }
};

int main()
{
        Derived Obj;

        cout << "\n 1st Object Values => " << Obj.N1 << " => " << Obj.N2 << " => " << Obj.N3 << endl;

        Derived Obj2(11);

        cout << "\n 2nd Object Values => " << Obj2.N1 << " => " << Obj2.N2 << " => " << Obj2.N3 << endl;

        _getch();
        return 0;
}
