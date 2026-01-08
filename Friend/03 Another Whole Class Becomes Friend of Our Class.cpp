using namespace std;
#include<iostream>
#include<conio.h>

class Arith
{
    public :
            Arith()
            {
                cout << "\n Inside Constructor of Arith Class!!!";
            }

            ~Arith()
            {
                cout << "\n Inside Destructor of Arith Class!!!";
            }

            void Generate_Sum(int, int)
            {
                Calc Obj;
            }
            void Generate_Sub(int, int);
};

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

                cout << "\n Inside Calc Default Constructor!!!" << endl;
            }

            ~Calc()                                                     // Destructor
            {
                cout << " \n Inside Calc Destructor " << endl;
            }

            friend class Arith;                                       // Declaring Another whole Class as Friend of our Class
};

void Arith :: Generate_Sum(int Num1, int Num2)
{
    Calc Obj;

    Obj.N1 = Num1;
    Obj.N2 = Num2;

    Obj.Addition();

    cout << "\n Summation Of Given Numbers is = " << Obj.Sum << endl;

    cout << "\n Press Any Key To Go Back To Main()...";

    _getch();
}

void Arith :: Generate_Sub(int Num1, int Num2)
{
    Calc Obj;

    Obj.N1 = Num1;
    Obj.N2 = Num2;

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

        Arith A_Obj;

        A_Obj.Generate_Sum(No1, No2);

        cout << "\n In Main() \n Continued !!!" << endl;
        _getch();

        A_Obj.Generate_Sub(No1,No2);

        cout << "\n Back in Main() \n Thanks FRIENDS !!!" << endl;

        _getch();
        return 0;
}
