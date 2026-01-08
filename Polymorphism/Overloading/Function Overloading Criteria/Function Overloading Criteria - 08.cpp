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

            void Check(const int dNum)                /// 3000 : Not-Allowed As Data Qualifier - Constant Argument is Not Considered as Overloading Criteria
            {
                cout<<"\n Value at Constant Check() = "<< dNum;
            }
};

int main()
{
        OverLoad_Criteria Obj1;
        const int Num = 51;

        Obj1.Check(55);                      ///  Not Allowed
        Obj1.Check(Num);                     ///  Not Allowed

        _getch();
        return 0;
}
