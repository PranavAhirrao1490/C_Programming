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

double RectArea(float fWidth, float fHeight)
{

    double dArea = 0;

    if(fWidth<0)
    {
        fWidth = -fWidth;
    }
    if(fHeight<0)
    {
        fHeight = -fHeight;
    }

    dArea = fWidth * fHeight;

    return dArea;

}

///////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
///////////////////////////////////////////////////

int main()
{ 
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width");
    scanf("%f",&fValue1);

    printf("Enter Height");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1 , fValue2);

    printf("Area is Rect Angle is : %f\n",dRet);


    return 0;
}