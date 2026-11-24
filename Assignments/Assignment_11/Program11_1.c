#include<stdio.h>

///////////////////////////////////////////////////
//
//   Function Name    :   PrintEven
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Prints even numbers based on the given count/limit
//   Date             :   21/11/2026
//   Author           :   Pranav Sudhakar Ahirrao
//
///////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }
    for(iCnt = iStart; iCnt<=iEnd; iCnt++)
    {
        printf("%d ",iCnt);
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point");
    scanf("%d",&iValue1);

    printf("Enter Ending Point");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}