///  Total and Percentage of 3 Subject Marks - Call By Reference(in CPP)

using namespace std;
#include<iostream>
#include<conio.h>
#include<stdlib.h>

void Calculate(int, int ,int, int&, float&);

int main()
{
    int Phy = 0, Chem = 0, Maths = 0, Tot_Marks = 0;
    float Percent = 0.0;

    cout << "\n Enter 3 Subjects Marks => \n";

    cout << "\n Enter Physics Marks : ";
    cin >> Phy;

    cout << "\n Enter Chemistry Marks : ";
    cin >> Chem;

    cout << "\n Enter Mathematics Marks : ";
    cin >> Maths;

    Calculate(Phy, Chem, Maths, Tot_Marks, Percent);

    //system("cls");
    cout << "\n ============********============ ";

    cout << "\n\n Student Report Card => \n";
    cout << "\n\t Physics     = " << Phy;
    cout << "\n\t Chemistry   = " << Chem;
    cout << "\n\t Mathematics = " << Maths;
    cout << "\n --------------------------------";
    cout << "\n\t Total Marks = " << Tot_Marks;
    cout << "\n\t Percentage  = " << Percent;

    cout << "\n\n ============********============ ";

    getch();
    return 0;
}

void Calculate(int P,int C, int M, int &Tot, float &Per)
{
    Tot = P + C + M;

    Per = ( (float)(Tot) )/ 3;

    return;
}
