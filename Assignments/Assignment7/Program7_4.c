#include<stdio.h>

///////////////////////////////////////////////////
//
//   Function Name    :   CalculateBonus
//   Input            :   18
//   Output           :   1   3    5   7    9  11   13
//   Description      :     Write a program which accepts n from user and print all odd number up to n
//   Date             :   25/10/2026
//   Author           :   Pranav Sudhakar Ahirrao
//
///////////////////////////////////////////////////

void oddDisplay(int iNo)
{
    int icnt = 0;

    for(icnt = 1; icnt <=iNo; icnt++)

    if(icnt % 2!= 0)
    {
        printf("%d\t",icnt);
    }
}
int main()
{
    int ivalue = 0;

    printf("Enter number");
    scanf("%d",&ivalue);

    oddDisplay(ivalue);

    return 0;

}