//Program for function overloading

using namespace std;
#include<iostream>
#include<conio.h>

class OverLoad_Criteria
{
        public:
            void Check(int No)                           /// 2000
            {
                cout<<"\n Value at Normal function Check() = "<< No;
            }

            void Check(int *Ptr)                        /// 3000 - ALLOWED
            {
                cout<<"\n Value at Pointer function Check() = "<< *Ptr;
            }
};

int main()
{
        OverLoad_Criteria Obj;

        int Id = 21;
        int &Id_Ref = Id;

        Obj.Check(101);                 /// 2000
        Obj.Check(Id);                  /// 2000

        Obj.Check(&Id);                 /// 3000

        _getch();
        return 0;
}
