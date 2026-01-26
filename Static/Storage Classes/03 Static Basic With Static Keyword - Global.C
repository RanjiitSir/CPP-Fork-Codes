#include<stdio.h>
#include<conio.h>

void Book_Read();

static int Res = 10;               /// Global Non-Static Variable

int main()
{
        Book_Read();
        printf("\n Pages Read By Day 1 = %d", Res);

        Book_Read();
        printf("\n Pages Read By Day 2 = %d", Res);

        Book_Read();
        printf("\n Pages Read By Day 3 = %d", Res);

        getch();
        return 0;
}

void Book_Read()
{
    int PCnt = 0;

    printf("\n\n How Many Pages Read Today : ");
    scanf("%d",&PCnt);

    Res = Res + PCnt;

    return;
}
