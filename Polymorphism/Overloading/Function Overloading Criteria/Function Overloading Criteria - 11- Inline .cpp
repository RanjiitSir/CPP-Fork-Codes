//Program for function overloading

using namespace std;
#include<iostream>
#include<conio.h>

class OverLoad_Criteria
{
        public:
            void Check(int No)                          /// 2000
            {
                cout<<"\n Value at Normal Check() = "<< No;
            }

            inline void Check(int Num)                /// 3000
            {
                cout<<"\n Value at INLINE Check() = "<< Num;
            }
};

int main()
{
        OverLoad_Criteria Obj1;
        int Num = 21;

        Obj1.Check(Num);

        getch();
        return 0;
}
