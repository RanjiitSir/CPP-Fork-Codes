using namespace std;
#include<iostream>
#include<conio.h>

int Num = 50;

class
{
    public :
            int N1;
            float Per;

            void Modify()                                   // Member Function
            {
                    N1 = 55;
                    N2 = 21;
                    Per = 55.65;

                    cout << "\n Inside Member Function Modify()!!!" << endl;
            }
}Obj1, Obj2, Obj3, *oPtr, **oPPtr;

int main()
{
        oPtr = &Obj2;

        Obj1.Modify();

        cout << "\n Object Values => " << Obj1.N1 << " => " << Obj1.N2 << " => " << Obj1.Per << endl;

        _getch();
        return 0;
}
