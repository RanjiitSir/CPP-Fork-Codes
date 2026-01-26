using namespace std;
#include<iostream>
#include<conio.h>

int gNum = 21;

void Fun()
{
        int i = 50;
        static int j = 101;

        cout << "\n Value of Non Static Variable = " << i;
        cout << "\n Value of Static Variable = " << j << endl;
        cout << "\n Value of Global Variable = " << gNum << endl;

        i--;
        j = j + 10;
        gNum++;

        getch();
        return;
}

int main()
{
        Fun();
        Fun();

        gNum = 500;

        Fun();
        Fun();

        getch();
        return 0;
}
