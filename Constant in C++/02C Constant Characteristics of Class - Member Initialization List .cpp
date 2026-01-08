using namespace std;
#include<iostream>
#include<conio.h>

class India
{
    public :
            int N1, N2 , N3;

            India()                                          // Default Constructor
            {
                N1 = N2 = N3 = 0;

                cout << "\n Inside Default Constructor!!!" << endl;
            }

            India(int x) : N2(x++), N3(x), N1(++x)            // Parameterized Constructor => =>  With Member Initialization List
            {
                cout << "\n Inside Parameterized Constructor!!!" << endl;
            }

            ~India()                                         // Destructor
            {
                cout << " \n Inside Destructor - " << N3 << endl;
            }
};


int main()
{
        India Obj(10);

        cout << "\n Object Values => " << Obj.N1 << " => " << Obj.N2 << " => " << Obj.N3 << endl;

        _getch();
        return 0;
}
