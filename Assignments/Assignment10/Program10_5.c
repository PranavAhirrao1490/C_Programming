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

double squaremeter(int iValue)
{
    double dAns = 0.0;

    if(iValue<0)
    {
        iValue = -iValue;
    }
    dAns = iValue * 0.0929;

    return dAns;
}

///////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet");
    scanf("%d",&iValue);

    dRet = squaremeter(iValue);

    printf("square feet in the meter %f\n",dRet);

    return 0;
}