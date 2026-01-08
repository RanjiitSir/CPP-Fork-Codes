//Program for function overloading

using namespace std;
#include<iostream>
#include<conio.h>

class Sum
{
        public:
            void Add(int N1,int N2)               /// 1000
            {
                cout<<"\n Addition = "<< N1 + N2;
            }

            void Add(float N1,float N2)           /// 2000   //Allowed : Changing Type of argument is criteria of overloading
            {
                cout<<"\n Addition = "<< N1 + N2;
            }
};

int main()
{
        Sum Obj;

        Obj.Add(2,5);                       /// 1000 => Add()
        Obj.Add(15.5f,7.2f);                  /// 2000 => Add()

        _getch();
        return 0;
}
