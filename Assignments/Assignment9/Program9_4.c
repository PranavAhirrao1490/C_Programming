#include<stdio.h>
#include<stdlib.h>

int oddFactorial(int iNo)
{
    int icnt = 0;
    int iFact = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(icnt = iNo; icnt>=1; icnt--)
    {
        if(icnt %2 !=0)
        {
            iFact = iFact * icnt;
        }
        
    }
    return iFact;
}
int main()
{
    int ivalue = 0, iRet = 0;

    printf("Enter numbar");
    scanf("%d",&ivalue);

    iRet = oddFactorial(ivalue);

    printf("odd Factorial number is %d",iRet);

    return EXIT_SUCCESS;
}