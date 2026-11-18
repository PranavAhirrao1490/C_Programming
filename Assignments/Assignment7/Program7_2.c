#include<stdio.h>


///////////////////////////////////////////////////
//
//   Function Name    :   CalculateBonus
//   Input            :   8
//   Output           :   1    2    3   4   5   6   7   8
//   Description      :   write a program which number from user and print number till that number 
//   Date             :   25/10/2026
//   Author           :   Pranav Sudhakar Ahirrao
//
///////////////////////////////////////////////////

void Display(int iNo)
{
    int icnt = 0;
    
    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("%d",icnt);
    }
}

    int main()
    {
        int ivalue = 0;
        printf("Enter Number");
        scanf("%d",&ivalue);

        Display(ivalue);

        return 0;


    }
