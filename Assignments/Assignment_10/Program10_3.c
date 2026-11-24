#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :  kmTOMeter
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Converts KM to Meters (handles negatives)
//   Date             :   24/11/2026
//   Author           :   Pranav Sudhakar Ahirrao
//
///////////////////////////////////////////////////
int KMtoMeter(int iNo)
{
    int iAns = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    iAns = iNo * 1000;

    return iAns;
}
////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance in km:\n");
    scanf("%d", &iValue);   

    iRet = KMtoMeter(iValue);

    printf("Meter Value %d\n", iRet);
}