using namespace std;
#include<iostream>
#include<conio.h>
float Area_Of_Circle(float);

const float Pi = 3.14;                      /// Constant Global Variable

int main()
{
        const int No = 0;                   /// Local Constant Variable
        float R = 0.0;                      /// Non Constant Local Variable

        /// No++;                            // Not Allowed as it is Read Only Variable i.e CONSTANT
        /// No = 101;                        // Not Allowed as it is Read Only Variable i.e CONSTANT

        cout << "\n Enter Radius of Circle = ";
        cin >> R;

        cout << "\n Area Of Circle is = " << Area_Of_Circle(R) << endl;

        _getch();
        return 0;
}

float Area_Of_Circle(float Rad)
{
        float Area = 0.0;

        Area = Pi * Rad * Rad;

        return Area;
}
