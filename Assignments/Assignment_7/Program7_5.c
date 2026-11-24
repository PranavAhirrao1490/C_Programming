#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   MultipleDisplay
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Prints multiples of iNo N times (handles negatives)
//   Date             :   24/11/2026
//   Author           :   Pranav Sudhakar Ahirrao
//
///////////////////////////////////////////////////
void MultipleDisplay(int iNo)
{
    int iCnt = 0;
     if(iNo<=0)
        {
            iNo = -iNo;
        }
    for(iCnt = 1; iCnt <=5; iCnt++) 
    {
      printf("%d\t", iNo * iCnt);
    }
       printf("\n");

} 
/////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    printf("Enter  number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);
    return 0;
}