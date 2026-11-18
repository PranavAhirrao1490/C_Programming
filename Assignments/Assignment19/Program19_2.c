#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i = 0,  j = 0;

    for(i = iRow; i>= 1; i--)
    {
        for(j = 1; j <=i ; j++)
        {
            printf("*  \t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of rows and columns ");
    scanf("%d",&iValue1,&iValue2);

    pattern(iValue1,iValue2);


    return 0;
}