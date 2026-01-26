#include<stdio.h>
#include<conio.h>
void Fun();

static int Num = 21;

int main()
{
            int Sum = 0;

            Fun();

            Num = 5;
            printf("\n\n Back To Main()");

            Fun();
            Num++;

            printf("\n\n Again Back To Main()");

            Fun();

            printf("\n\n Final Value = %d.",Num);

            getch();
            return 0;
}

void Fun()
{
            printf("\n\n Value of Num = %d.", Num);

            Num = Num * 10;

            printf("\n Enter Any Key To Go Back!!!");

            getch();

            return;
}
