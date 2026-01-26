#include<stdio.h>
#include<conio.h>

void Book_Read();
static int Res = 10;

int main()
{
    int Total_Pages = 0, Day_Cnt = 1;

    printf("\n Enter Total Number Of Pages : ");
    scanf("%d",&Total_Pages);   /// 1500

    while(Res < Total_Pages )
    {
        Book_Read();
        printf("\n Pages Read By Day %d = %d",Day_Cnt++, Res);
        getch();
    }

    printf("\n Congrats You Have Completed Book in %d Days.", Day_Cnt);

    getch();
    return 0;
}

void Book_Read()
{
    int PCnt = 0;

    printf("\n\n How Many Pages Read Today : ");
    scanf("%d",&PCnt);

    Res = Res + PCnt;
}
