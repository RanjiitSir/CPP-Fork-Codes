//Program for function overloading

using namespace std;
#include<iostream>
#include<conio.h>

class Base
{
        public:
                int i , j;

                Base()
                {
                    i = j = 0;
                    cout <<"\n In Def Constructor of Base()";
                }

                virtual void Fun()                              /// 1000
                {
                    cout<<"\n Inside Base :: Fun()";
                }

                virtual void Gun()                             /// 2000
                {
                     cout<<"\n Inside Base :: Gun()";
                }

                void Sun()                                     /// 3000
                {
                     cout<<"\n Inside Base :: Sun()";
                }

                ~Base()
                {
                    cout <<"\n In Destructor of ~Base()";
                }

};

class Derived : public Base
{
        public:
                int x, y;

                Derived()
                {
                    x = y = 0;
                    cout <<"\n In Def Constructor of Derived()";
                }

                void Fun()                              /// 5000        /// Overriding
                {
                    cout<<"\n Inside Derived :: Fun()";
                }

                void Sun()                             /// 6000       // BEHAVIOR REDEFINITION
                {
                     cout<<"\n Inside Derived :: Gun()";
                }

                virtual void Run()                     /// 7000
                {
                     cout<<"\n Inside Derived :: Sun()";
                }

                ~Derived()
                {
                    cout <<"\n In Destructor of ~Derived()";
                }
};

int main()
{
        Base bObj;
        Derived dObj;

        Base *bPtr = &dObj;                           /// DownCasting
        Derived *dPtr = &bObj;                        /// UpCasting

        _getch();
        return 0;
}
