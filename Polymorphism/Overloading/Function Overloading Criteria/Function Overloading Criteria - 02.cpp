//Program for function overloading

using namespace std;
#include<iostream>
#include<conio.h>

class Sum
{
        public:
            void Add(int N1,int N2)           /// 1000
            {
                cout<<"\n Addition = "<< N1 + N2;
            }

            int Add(int N1,int N2)           /// 2000   //Not allowed : Return Value is not criteria of overloading
            {
                int Res = 0;

                Res = N1 + N2;
                return Res;
            }
};

int main()
{
        Sum Obj;

        Obj.Add(2,5);
        Obj.Add(6,2);

        _getch();
        return 0;
}
