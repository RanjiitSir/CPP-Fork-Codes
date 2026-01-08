//Program for function overloading

using namespace std;
#include<iostream>
#include<conio.h>

class OverLoad_Criteria
{
        public:

            void Check(int No)               /// 2000
            {
                cout<<"\n Value at Integer = "<< No;
            }

            void Check(double dNum)          /// 3000
            {
                cout<<"\n Value at Double = "<< dNum;
            }
};

int main()
{
        OverLoad_Criteria Obj;
        //char c = 'A';

        Obj.Check('H');                     /// 2000 => Check()
        Obj.Check(2);                       /// 2000 => Check()
        Obj.Check(15.5f);                   /// 3000 => Check()

        double Num = 54654.548;

        Obj.Check(Num);                     /// 3000 => Check()

        _getch();
        return 0;
}
