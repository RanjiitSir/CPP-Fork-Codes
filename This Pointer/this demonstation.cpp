using namespace std;
#include<iostream>
#include<conio.h>

class Product
{
    public :
            int PID;

            Product()
            {
                    this -> PID = 0;
                    cout << "\n Inside Product Constructor!!! \n";
            }

            ~Product()
            {
                    cout << "\n Inside Product Destructor!!! \n";
            }

            void SetPID(int PID)                 // void SetPID(Product const *this, int ID)
            {
                this->PID = PID;
                cout << "\n Product ID is Set to " << this->PID << " Successfully !!!"<< endl;
            }

            void GetPID()
            {
                cout << "\n Product ID of Current Object is = " << this->PID << endl;
            }
};

int main()
{
            Product Obj;

            Obj.SetPID(15);         //  SetPID(&Obj, 15);

            Obj.GetPID();           //   GetPID(&Obj);

            cout << "\n Value of PID = " << Obj.PID;
            _getch();
            return 0;
}
