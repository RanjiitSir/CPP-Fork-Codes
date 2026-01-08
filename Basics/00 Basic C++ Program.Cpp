using namespace std;
#include<iostream>
#include<conio.h>

class Calc
{
     public :
            int N1, N2, Sum;           /// Data Member/ Characteristics/ Class Vars

            /// Behaviors / Member Funtions / Class Functions

            void Set_Values()
            {
                cout << "\n Enter 2 Numbers = ";
                cin >> N1 >> N2;
            }

            void Addition()
            {
                cout << "\n Inside Add" << endl;
                Sum = N1 + N2;
            }
};

int main()
{
        Calc Obj1, Obj2, Obj3 ;              /// Synthesized Constructor

        Obj1.Set_Values();

        cout << "\n Back To Main()" << endl;

        Obj1.Addition();

        cout << "\n Back in Main()" << endl;

        cout<< "\n Addition of " << Obj1.N1 << " And " << Obj1.N2 << " is = " << Obj1.Sum << ".";

        getch();
        return 0;
}
