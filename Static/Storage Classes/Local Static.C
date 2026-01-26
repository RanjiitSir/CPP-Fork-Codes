// Program To Calculate Factorial of Given Number
#include<stdio.h>
#include<conio.h>

int Factorial(int);

int main()
{
        int  No = 0, Res = 0;

        printf("\n Enter Number To Calculate its Factorial = ");
        scanf("%d",&No);

        Res = Factorial(No);

        printf("\n Factorial of Number %d is = %d", No, Res);

        getch();
        return 0;
}

int Factorial(int Num)
{
        static int Fact = 1;

        if(Num > 0)
        {
                Fact = Num * Factorial(Num-1);
        }
        return Fact;
}
