using namespace std;
#include<iostream>
#include<conio.h>

class India
{
    public :
            int N1, N2;
            const int N3;

            India() : N3(0)                                          // Default Constructor
            {
                N1 = N2 = 0;

                cout << "\n Inside Default Constructor!!!" << endl;
            }

            India(int x): N3(x)                                     // Parameterized Constructor
            {
                N1 = 10 * x;
                N2 = 100 + x;

                cout << "\n Inside Parameterized Constructor!!!" << endl;
            }

            void Modify()
            {
                    N1 = 5;
                    N2 = N2 + N1 + N3;

                    cout << "\n Inside Non Constant Member Function Modify()!!!" << endl;
            }

            void Edit() const
            {
                    int Num = 0;
                    //N1 = 15;                           // NOT ALLOWED - As Constant Behavior Cant Change
                    //N2++;                                             // Contents Of Caller Object

                    Num = N1 + N2 + N3;

                    cout << N1 << endl;
                    cout << N2 << endl;
                    cout << N3 << endl;
                    cout << Num << endl;

                    cout << "\n Inside Constant Member Function Edit()!!!" << endl;
            }

            ~India()                                                // Destructor
            {
                cout << " \n Inside Destructor - " << N3 << endl;
            }
};


int main()
{
        India Obj(15);

        cout << "\n Object Values => " << Obj.N1 << " => " << Obj.N2 << " => " << Obj.N3 << endl;

        Obj.Modify();

        cout << "\n Object Values => " << Obj.N1 << " => " << Obj.N2 << " => " << Obj.N3 << endl;

        Obj.Edit();

        cout << "\n Object Values => " << Obj.N1 << " => " << Obj.N2 << " => " << Obj.N3 << endl;

        _getch();
        return 0;
}
