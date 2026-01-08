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
        private :
            void Check(int dNum)          /// 3000 : Not Allowed As Changing Access Specifiers is not Overloading Criteria
            {
                cout<<"\n Value at Integer = "<< dNum;
            }
};

int main()
{
        OverLoad_Criteria Obj;

        Obj.Check(55);
        Obj.Check(21);

        getch();
        return 0;
}
