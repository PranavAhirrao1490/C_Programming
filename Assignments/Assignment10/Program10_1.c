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

double CircleArea(float fRedius)
{
    float fPI = 3.14;
    double dArea = 0;
    
        if(fRedius<0)
        {
            fRedius = -fRedius;
        }
        dArea = fPI * fRedius * fRedius;
    
        return dArea;

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

    printf("Enter radius");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf(" Area of Circle is :  %f\n ",dRet);

    return 0;
}