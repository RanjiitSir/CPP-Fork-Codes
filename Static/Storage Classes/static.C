#include<stdio.h>
#include<conio.h>
void Fun();

int main()
{
            Fun();

            printf("\n\n Back To Main()");

            Fun();

            printf("\n\n Again Back To Main()");

            Fun();

            getch();
            return 0;
}

void Fun()
{
            static int Num;

            printf("\n\n Value of Num = %d.", Num);

            Num = Num * 10;

            printf("\n Enter Any Key To Go Back!!!");

            getch();

            return;
}
