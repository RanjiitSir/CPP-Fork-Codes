using namespace std;
#include<iostream>
#include<conio.h>

extern int gNum;

void Fun()
{
        int i = 50;
        static int j = 101;

        cout << "\n Value of Non Static Variable = " << i;
        cout << "\n Value of Static Variable = " << j << endl;

        i++;
        j++;

        cout << "\n Value of Global Variable = " << gNum << endl;

        return;
}
