#include<stdio.h>


///////////////////////////////////////////////////
//
//   Function Name    :   CalculateBonus
//   Input            :   4
//   Output           :   4     8     12     16     20
//   Description      :   Write   a program which accept N and printf first 5 multiples of N 
//   Date             :   25/10/2026
//   Author           :   Pranav Sudhakar Ahirrao
//
///////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int icnt = 0;

    for(icnt = 1; icnt<=5; icnt++)

    if(icnt * 2!=0)
    {
        printf("%d\t",iNo * icnt);
    }
}
int main()
{
    int ivalue = 0;

    printf("Enter Number");
    scanf("%d",&ivalue);

    MultipleDisplay(ivalue);

    return 0;
}