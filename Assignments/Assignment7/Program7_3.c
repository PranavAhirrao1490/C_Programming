#include<stdio.h>

///////////////////////////////////////////////////
//
//   Function Name    :   CalculateBonus
//   Input            :   4
//   Output           :   -4    -3   -2   -1   0  1   2   3  4  
//   Description      :   write a program which accept number from user and print its numbers line 
//   Date             :   25/10/2026
//   Author           :   Pranav Sudhakar Ahirrao
//
///////////////////////////////////////////////////

void Display(int iNo)
{
    int icnt = 0;

    for(icnt = -iNo; icnt <= iNo; icnt++)
    {
        printf("%d",icnt);
    }
}
int main()
{   
    int ivalue = 0;

    printf("Enter number");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;

}