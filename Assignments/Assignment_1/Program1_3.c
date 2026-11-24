#include<stdio.h>
///////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   None
//  Output          :   None
//  Description     :   Display number 5 to 1
//  Date            :   18/11/2026
//  Author          :   Pranav Sudhakar Ahirrao
//
///////////////////////////////////////////////////
void Display()
{
    int i = 0;
    i = 5;
     while(i>=1)
     {
        printf("%d\n", i);
        i--;
     }
}
///////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
///////////////////////////////////////////////////

int main()
{
    Display();

    return 0; 
}