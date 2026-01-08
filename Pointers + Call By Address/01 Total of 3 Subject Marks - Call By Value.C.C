#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Calculate(int, int ,int);

int main()
{
    int Phy = 0, Chem = 0, Maths = 0, Tot_Marks = 0;

    printf("\n Enter 3 Subjects Marks => \n");
    printf("\n Enter Physics Marks : ");
    scanf("%d",&Phy);
    printf("\n Enter Chemistry Marks : ");
    scanf("%d",&Chem);
    printf("\n Enter Mathematics Marks : ");
    scanf("%d",&Maths);

    Tot_Marks = Calculate(Phy, Chem, Maths);

    system("cls");
    printf("\n ==========********========== ");

    printf("\n\n Student Report Card => \n");
    printf("\n\t Physics     = %d",Phy);
    printf("\n\t Chemistry   = %d",Chem);
    printf("\n\t Mathematics = %d",Maths);
    printf("\n ----------------------------");
    printf("\n\t Total Marks = %d",Tot_Marks);

    printf("\n\n ==========********========== ");

    getch();
    return 0;
}

int Calculate(int P,int C, int M)
{
    int Tot = 0;

    Tot = P + C + M;

    return Tot;
}
