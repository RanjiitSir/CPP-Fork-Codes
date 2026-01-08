using namespace std;
#include<iostream>
#include<conio.h>

class Calculator
{
        public :
                    int  No1, No2, Ans;          /// Data Members or Characteristics or class variable

                    void Add();                  /// Member Function Add or Behaviors Declaration

                    void Sub();                  /// Member Function Sub or Behaviors Declaration
};

void  Calculator :: Add()                        /// Member Functions or Behaviors  Definition Outside Class
{
        Ans = No1 + No2;
}

void Calculator :: Sub()                        /// Member Functions or Behaviors  Definition Outside Class
{
        Ans = No1 - No2;
}

int main()
{
        Calculator  obj1, obj2;

        obj1.No1 = 10;
        obj1.No2 = 20;

        obj2.No1 = 50;
        obj2.No2 = 25;

        obj1.Add();

        cout << "Addition is = " << obj1.Ans << endl;

        obj2.Sub();

        cout << "Subtraction is = " << obj2.Ans << endl;

        getch();
        return 0;
}
