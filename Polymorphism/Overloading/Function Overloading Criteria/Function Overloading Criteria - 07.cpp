//Program for function overloading

using namespace std;
#include<iostream>
#include<conio.h>

class OverLoad_Criteria
{
        public:
            void Check(int No)                        /// 2000
            {
                cout<<"\n Value at Non-Constant Check() = "<< No;
            }

            void Check(int dNum)const                 /// 3000 : Allowed As Constant is Considered as Overloading Criteria
            {
                cout<<"\n Value at Constant Check() = "<< dNum;
            }
};

int main()
{
        OverLoad_Criteria Obj1;
        const OverLoad_Criteria Obj2;

        Obj1.Check(55);                     /// 2000
        Obj2.Check(21);                     /// 3000

        _getch();
        return 0;
}
