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

double fhtoCs(float fTemp)
{
    double dcelsius = 0.0;

    dcelsius = (fTemp - 32) * (5.0/9.0);

    return dcelsius;
}

///////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
///////////////////////////////////////////////////


int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Tempereture in Fahrenheit");
    scanf("%d",&fValue);

    dRet = fhtoCs(fValue);

    printf("Temperature in celsius : %f\n",dRet);

    return 0;
}