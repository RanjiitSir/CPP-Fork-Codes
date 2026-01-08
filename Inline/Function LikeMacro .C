#include<stdio.h>
#include<conio.h>

#define Add(N1, N2)  N1 + N2
#define Mult(N1, N2)  N1 * N2

int main()
{
        int No1 = 0, No2 = 0, Res = 0;

        printf("\n Enter 2 Numbers = ");
        scanf("%d%d",&No1,&No2);

        Res = Add(No1,No2);   // No1 + No2

        printf("\n Addition Of %d & %d is = %d.", No1, No2, Res);

        Res = Mult(No1,No2);   // No1 * No2

        printf("\n Multiplication Of %d & %d is = %d.", No1, No2, Res);

        _getch();
        return 0;
}
