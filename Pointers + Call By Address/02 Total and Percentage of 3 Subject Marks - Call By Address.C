/// Total and Percentage of 3 Subject Marks - Call By Address - Using C
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Calculate(int, int ,int, int*, float*);

int main()
{
    int Phy = 0, Chem = 0, Maths = 0, Tot_Marks = 0;
    float Percent = 0.0;

    printf("\n Enter 3 Subjects Marks => \n");
    printf("\n Enter Physics Marks : ");
    scanf("%d",&Phy);
    printf("\n Enter Chemistry Marks : ");
    scanf("%d",&Chem);
    printf("\n Enter Mathematics Marks : ");
    scanf("%d",&Maths);

    Calculate(Phy, Chem, Maths, &Tot_Marks, &Percent);

    //system("cls");
    printf("\n ==========********========== ");

    printf("\n\n Student Report Card => \n");
    printf("\n\t Physics     = %d",Phy);
    printf("\n\t Chemistry   = %d",Chem);
    printf("\n\t Mathematics = %d",Maths);
    printf("\n ----------------------------");
    printf("\n\t Total Marks = %d",Tot_Marks);
    printf("\n\t Percentage  = %0.2f",Percent);

    printf("\n\n ==========********========== ");

    getch();
    return 0;
}

void Calculate(int P,int C, int M, int *Tot, float *Per)
{
    *Tot = P + C + M;

    *Per = ( (float)(*Tot) )/ 3;

    return;
}
