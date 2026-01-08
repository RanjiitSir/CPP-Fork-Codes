//Program for function overloading

using namespace std;
#include<iostream>
#include<conio.h>

class OverLoad_Criteria
{
        public:
            void Check(int No, float Num)                        /// 2000
            {
                cout<<"\n Value of Integer at 1st Check() = "<< No;
                cout<<"\n Value of Float at 1st Check() = "<< Num;
            }

            void Check(float No, int Num)                        /// 3000
            {
                cout<<"\n Value of Integer at 2nd Check() = "<< Num;
                cout<<"\n Value of Float at 2nd Check() = "<< No;
            }
};

int main()
{
        OverLoad_Criteria Obj;

        Obj.Check(15, 54.95);
        Obj.Check(97.26, 35);

        _getch();
        return 0;
}
