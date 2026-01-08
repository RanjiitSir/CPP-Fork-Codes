//Program for function overloading

using namespace std;
#include<iostream>
#include<conio.h>

class OverLoad_Criteria
{
        public:
            void Check(int No)                          /// 2000
            {
                cout<<"\n Value at Non-Static Check() = "<< No;
            }

            static void Check(int Num)                /// 3000
            {
                cout<<"\n Value at Static Check() = "<< Num;
            }
};

int main()
{
        OverLoad_Criteria Obj;
        static OverLoad_Criteria sObj;

        Obj.Check(15);
        sObj.Check(45);

        _getch();
        return 0;
}
