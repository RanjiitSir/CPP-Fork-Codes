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

            void Add(int N1,int N2,int N3)   /// 2000   //allowed : number of parameters is criteria of overloading
            {
                cout<<"\n Addition = "<< N1 + N2 + N3;
            }
};

int main()
{
        Sum Obj;

        Obj.Add(2,5);
        Obj.Add(6,2,9);

        getch();
        return 0;
}
