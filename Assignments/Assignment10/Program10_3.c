#include<stdio.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   None
//  Output          :   None
//  Description     :   Display a Message multiple times
//  Date            :   25/10/2026
//  Author          :   Pranav Sudhakar Ahirrao
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

///////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
///////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Meter value %d\\n", iRet);

    return 0;
}