#include<stdio.h>
#include<stdlib.h>

//
//   Function Name    :   CalculateBonus
//   Input            :   5
//   Output           :   $  *  $  * $   *  $  *  $  *
//   Description      :   Write a program which accpet number from user and print that number of $ & * on screen
//   Date             :   25/10/2026
//   Author           :   Pranav Sudhakar Ahirrao
//
///////////////////////////////////////////////////

void Pattern(int iNo)
{
    int icnt = 0;

    for(icnt = 1; icnt <= iNo; icnt ++)
    {
        printf("$\t*\t");
    }
    printf("\n");
    
}
int main()
{
    int ivalue = 0;

    printf("Enter number");
    scanf("%d",&ivalue);

    Pattern(ivalue);

    return 0;

}