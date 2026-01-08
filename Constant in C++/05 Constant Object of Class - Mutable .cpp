using namespace std;
#include<iostream>
#include<conio.h>

class India
{
    public :
            int N1, N2 ;
            mutable float My_Sal;

            const int N3;

            India() : N3(0)                                          // Default Constructor
            {
                N1 = N2 = 0;
                My_Sal = 500;

                cout << "\n Inside Default Constructor!!!" << endl;
            }

            India(int x): N3(x)                                     // Parameterized Constructor
            {
                N1 = 10 * x;
                N2 = 100 + x;
                My_Sal = 20000;

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
        const India Obj1(15);

        ///Obj1.N1++;               // NOT ALLOWED - As Constant Object Cant Change its Contents
        ///Obj1.N2--;

        Obj1.My_Sal++;             /// ALLOWED - As My_Sal is Characteristics Declared with Mutable Keyword...

        Obj1.Edit();              /// Allowed - Bcz Constant Object Can Only Call its Constant Behaviors
        ///Obj1.Modify();          // NOT ALLOWED - Bcz Constant Object Can't Only Call its Non-Constant Behaviors as it may try modifying contents of caller object

        cout << "\n Object Values => " << Obj1.N1 << " => " << Obj1.N2 << " => " << Obj1.N3 << endl;
        cout << "\n Salary = " << Obj1.My_Sal << endl;

        _getch();
        return 0;
}
