#include<stdio.h>
#include<conio.h>
void Fun();

int main()
{
            auto  int   No1 , No2 ;

            printf("\n Values %d  & %d.",No1, No2);

            getch();

            Fun();

            printf("\n\n Back To Main()");

            printf("\n\n Enter 2 Numbers = ");
            scanf("%d%d",&No1,&No2);

            printf("\n New Values %d  & %d.",No1, No2);

            getch();
            return 0;
}

void Fun()
{
            int Num = 21;

            printf("\n Value of Num = %d.", Num);

            printf("\n Enter Any Key To Go Back!!!");
            getch();

            return;
}
