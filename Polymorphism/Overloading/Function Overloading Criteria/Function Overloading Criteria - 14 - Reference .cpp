//Program for function overloading

using namespace std;
#include<iostream>
#include<conio.h>

class OverLoad_Criteria
{
        public:
            void Check(int No)                           /// 2000
            {
                cout<<"\n Value at Non Reference function Check() = "<< No;
            }

            void Check(int &Num)                        /// 3000 - ALLOWED, BUT it Creates Ambiguity with Normal declared function at runtime : So could not get executed
            {
                cout<<"\n Value at Reference function Check() = "<< Num;
            }
};

int main()
{
        OverLoad_Criteria Obj;

        int Id = 21;
        int &Id_Ref = Id;

        Obj.Check(101);
        Obj.Check(Id_Ref);
        Obj.Check(Id);

        getch();
        return 0;
}
