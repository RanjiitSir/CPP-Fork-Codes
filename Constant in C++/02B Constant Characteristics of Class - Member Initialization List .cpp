using namespace std;
#include<iostream>
#include<conio.h>

class India
{
    public :
            int N1, N2 , N3;

            India() : N1(0), N2(10)                       // Default Constructor  =>=>  With Member Initialization List
            {
                N3 = 0;

                cout << "\n Inside Default Constructor!!!" << endl;
            }

            India(int a, int b) : N1(a), N2(b)           // Parameterized Constructor => =>  With Member Initialization List
            {
                N1 = 100;
                N3 = 500;

                cout << "\n Inside Parameterized Constructor!!!" << endl;
            }

            ~India()                                    // Destructor
            {
                cout << " \n Inside Destructor - " << N3 << endl;
            }
};


int main()
{
        India Obj1;
        India Obj2(51, 21);

        cout << "\n Object 1 Values => " << Obj1.N1 << " => " << Obj1.N2 << " => " << Obj1.N3 << endl;

        cout << "\n Object 2 Values => " << Obj2.N1 << " => " << Obj2.N2 << " => " << Obj2.N3 << endl;

        _getch();
        return 0;
}
