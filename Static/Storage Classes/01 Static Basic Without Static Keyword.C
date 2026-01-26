#include<stdio.h>
#include<conio.h>

int Book_Read();

int main()
{
        int No = 0;

        No = Book_Read();
        printf("\n Pages Read By Day 1 = %d", No);

        No = Book_Read();
        printf("\n Pages Read By Day 2 = %d", No);

        No = Book_Read();
        printf("\n Pages Read By Day 3 = %d", No);

        getch();
        return 0;
}

int Book_Read()
{
    int Res = 10;
    int PCnt = 0;

    printf("\n\n How Many Pages Read Today : ");
    scanf("%d",&PCnt);

    Res = Res + PCnt;

    return Res;
}
