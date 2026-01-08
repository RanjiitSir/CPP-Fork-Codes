using namespace std;
#include<iostream>
#include<conio.h>

class Base
{
        public:
                int i , j;

                Base();
                void Fun()                                     /// 1000
                {
                     cout<<"\n Inside Base :: Fun()";
                }
                virtual void Gun()                            /// 2000
                {
                     cout<<"\n Inside Base :: Gun()";
                }
                virtual void Sun() = 0;                     /// Pure Virtual Function
                ~Base();
};

void Base :: Sun()
{
    cout<<"\n Inside Partial Definition of Sun() in Base .";
}

class Derived : public Base
{
        public:
                int x, y;

                Derived();
                void Sun()
                {
                        Base :: Sun();
                        cout<<"\n Inside Derived :: Sun()";
                }
                void Gun()                               /// 4000
                {
                     cout<<"\n Inside Derived :: Gun()";
                }
                ~Derived();
};

int main()
{
        Derived dObj;

        cout<< "\n Size of Derived Object => " << sizeof(dObj)<< endl;

        dObj.Fun();
        dObj.Gun();
        dObj.Sun();

        _getch();
        return 0;
}

Base :: Base()
{
    i = j = 0;
    cout <<"\n In Def Constructor of Base()";
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

Derived :: ~Derived()
{
    cout <<"\n In Destructor of ~Derived()";
}
