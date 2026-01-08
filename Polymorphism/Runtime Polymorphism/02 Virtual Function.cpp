using namespace std;
#include<iostream>
#include<conio.h>

class Base
{
        public:
                int i , j;

                Base();
                virtual void Fun()                                      /// 1000
                {
                    cout<<"\n Inside Base :: Fun()";
                }

                virtual void Gun()                                     /// 2000
                {
                     cout<<"\n Inside Base :: Gun()";
                }
                void Sun();
                ~Base();
};

class Derived : public Base
{
        public:
                int x, y;

                Derived();
                void Fun();
                void Sun();
                virtual void Run()                               /// 6000
                {
                     cout<<"\n Inside Derived :: Run()";
                }
                ~Derived();
};

int main()
{
        Base bObj;
        _getch();
        Derived dObj;

        cout<< "\n Inside Main()\n";
        _getch();
        bObj.Fun();
        _getch();
        dObj.Fun();

        cout<< "\n Inside Main()\n";
        _getch();
        bObj.Sun();
        _getch();
        dObj.Sun();

        cout<< "\n Inside Main()\n";
        _getch();
        bObj.Gun();
        _getch();
        dObj.Gun();

        _getch();
        return 0;
}

Base :: Base()
{
    i = j = 0;
    cout <<"\n In Def Constructor of Base()";
}

void Base :: Sun()                                     /// 3000
{
     cout<<"\n Inside Base :: Sun()";
}

Base :: ~Base()
{
    cout <<"\n In Destructor of ~Base()";
}

Derived :: Derived()
{
    x = y = 0;
    cout <<"\n In Def Constructor of Derived()";
}

void Derived :: Fun()                              /// 4000
{
    cout<<"\n Inside Derived :: Fun()";
}

void Derived :: Sun()                             /// 5000
{
     cout<<"\n Inside Derived :: Sun()";
}

Derived :: ~Derived()
{
    cout <<"\n In Destructor of ~Derived()";
}
