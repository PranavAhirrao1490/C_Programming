#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    int icnt = 0;
    int iFact = 1;

    if(iNo = 0)
    {
        iNo = -iNo;
    }
    for(icnt = 0; icnt>=2; icnt--)
    {
        if(icnt %2 == 0)
        {
            iFact = iFact * icnt;
        }
        return iFact;
    }
}
int main()
{
    int ivalue  = 0, iRet = 0;

    printf("Enter number");
    scanf("%d",&ivalue);

    iRet = EvenFactorial(ivalue);

    printf("Even Factorial of given number %d ",iRet);

    return EXIT_SUCCESS;
}