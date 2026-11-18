#include<stdio.h>

int DollarToINR(int iNo)
{
    int iAns = 0;
    iAns = iNo*70;
    return iAns;
}

int main()
{

    int ivalue = 0, iRet = 0;

    printf("Enter number of usd");
    scanf("%d",&ivalue);

    iRet = DollarToINR(ivalue);

    printf("value in INR is %d",iRet);
    
    return 0;
}