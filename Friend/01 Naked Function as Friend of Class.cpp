using namespace std;
#include<iostream>
#include<conio.h>

class Calc
{
    private :
            int Sum;

            void Addition()
            {
                Sum = N1 + N2;
            }

    protected :
            int Sub;

            void Subtraction()
            {
                Sub = N1 - N2;
            }

    public :
            int N1, N2;

            Calc()                                                      // Default Constructor
            {
                N1 = N2 = Sum = Sub = 0;

                cout << "\n Inside Default Constructor!!!" << endl;
            }

            ~Calc()                                                     // Destructor
            {
                cout << " \n Inside Destructor " << endl;
            }

            friend void Operate(int, int);
};

void Operate(int Num1, int Num2)
{
    Calc Obj;

    Obj.N1 = Num1;
    Obj.N2 = Num2;

    Obj.Addition();

    cout << "\n Summation Of Given Numbers is = " << Obj.Sum << endl;

    _getch();

    Obj.Subtraction();

    cout << "\n Subtraction Of Given Numbers is = " << Obj.Sub << endl;

    cout << "\n Press Any Key To Go Back To Main()...";

    _getch();
}

int main()
{
        int No1 = 0, No2 = 0;

        cout << "\n Enter 2 Numbers = ";
        cin >> No1 >> No2;

        Operate(No1, No2);

        cout << "\n Back in Main() \n Thanks FRIENDS !!!" << endl;

        _getch();
        return 0;
}
