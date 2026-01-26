/// default storage class that is => auto storage class
#include<stdio.h>
#include<conio.h>
int Add(int, int);

int main()
{
        static char ch;
        register int No;
        static float fNum;

        printf("\n Value of No = %d", No);
        printf("\n Value of ch = %c", ch);
        printf("\n Value of Per = %f", fNum);

        printf("\n Addition of 15 & 22 = %d",Add(15,22));

        getch();
        return 0;
}

int Add(int N1, int N2)
{
        auto int Sum = 0;

        Sum = N1 + N2;

        return Sum;
}
