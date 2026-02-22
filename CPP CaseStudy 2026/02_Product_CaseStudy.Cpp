#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Product
{
    public :
            Product();
            Product(char[], float, float);
            ~Product();
    private :
            int PID;
            char PName[40];
            float PPrice;
            float SPrice;

            static int PCnt;
    protected :
            void Accept_Product();
            void Display_Product();
};

class Inventory : private Product
{

};

int Product :: PCnt = 0;

Product :: Product()
{
    cout << "\n Inside Product Default Constructor" << endl;

    PID = PCnt + 101;
    strcpy(PName, "");
    PPrice = 0.0f;
    SPrice = 0.0f;

    PCnt++;
}

Product :: Product(char *PNm, float PP, float SP)
{
    cout << "\n Inside Product Parameterized Constructor" << endl;

    PID = PCnt + 101;
    strcpy(PName, PNm);
    PPrice = PP;
    SPrice = SP;

    PCnt++;
}

Product :: ~Product()
{
    cout<< "\n Inside Product Destructor of PID = " << PID << endl;
}

void Product :: Accept_Product()
{
    cout << "\n Enter Product Details for Product ID " << PID << " => "<< endl;

    cout << "\n Enter Product Name : ";
    cin >> PName;
    cout << "\n Enter Product Purchase Price : ";
    cin >> PPrice;
    cout << "\n Enter Product Sales Price : ";
    cin >> SPrice;

    cout << "\n Details Saved Successfully!!!!" << endl;

    return;
}

void Product :: Display_Product()
{
    cout << "\n Product Details : " << endl;

    cout << "\n Product ID     : " << PID << endl;
    cout << "\n Product Name   : " << PName << endl;
    cout << "\n Purchase Price : " << PPrice << endl;
    cout << "\n Sales Price    : " << SPrice << endl;

    cout << "\n ======= ***** ======= " << endl;

    return;
}

int main()
{


    cout<<"\n Back To Main Function" << endl;

    getch();
    return 0;
}
