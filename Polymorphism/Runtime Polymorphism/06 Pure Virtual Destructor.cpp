using namespace std;
#include<iostream>
#include<conio.h>

class Base
{
        public:
                int i;
                Base()
                {
                    i = 0;
                    cout <<"\n In Def Constructor of Base()";
                }
                void Fun()                                     /// 1000
                {
                    cout<<"\n Inside Base :: Fun() \t Value Of i = " << i;
                }
                virtual ~Base() = 0;
};

Base :: ~Base()
{
        cout <<"\n Partial Definition of Destructor of ~Base()";
}

class Derived : public Base
{
        public:
                int x;
                Derived()
                {
                    x = 0;
                    cout <<"\n In Def Constructor of Derived()";
                }
                ~Derived()
                {
                    cout <<"\n In Destructor of ~Derived()\t Value Of x = " << x;
                }
};

int main()
{
        cout<< "\n Size of Base Class => " << sizeof(Base)<< endl << " Size of Derived Class => " << sizeof(Derived)<< endl;

        // Base bObj;
        Derived dObj;

        dObj.i = 25;
        dObj.x = 50;

        dObj.Fun();

        cout<< "\n\n INSIDE MAIN()";

        _getch();
        return 0;
}
