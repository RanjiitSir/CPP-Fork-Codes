//Program for function overloading

using namespace std;
#include<iostream>
#include<conio.h>

class OverLoad_Criteria
{
        public:
            void Check(int No)                        /// 2000
            {
                cout<<"\n Value at int Check() = "<< No;
            }

            void Check(short int Num)                /// 3000
            {
                cout<<"\n Value at short int Check() = "<< Num;
            }
};

int main()
{
        OverLoad_Criteria Obj1;
        short int Num = 21;

        Obj1.Check(505);
        Obj1.Check(Num);

        _getch();
        return 0;
}
