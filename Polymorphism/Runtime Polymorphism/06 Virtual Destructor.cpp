using namespace std;
#include<iostream>
#include<conio.h>

class Base
{
        public:
                Base()
                {
                    cout <<"\n In Def Constructor of Base()";
                }
                virtual ~Base()
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
                ~Derived()
                {
                    cout <<"\n In Destructor of ~Derived()";
                }
};

int main()
{
        cout<< "\n Size of Base Class => " << sizeof(Base)<< endl << " Size of Derived Class => " << sizeof(Derived)<< endl;

        Base *bPtr = new Derived();

        delete bPtr;
        cout<< "\n\n INSIDE MAIN() After Releasing Object..";

        _getch();
        return 0;
}
