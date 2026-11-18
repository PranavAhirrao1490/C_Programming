#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
   int icnt = 0;
   int iEFact = 1;
   int ioFact = 1;

   if(iNo<0)
   {
      iNo = -iNo;
   }
   for(icnt = iNo; icnt>= 1; icnt--)
   {
    if(icnt %2== 0)
    {
        iEFact = iEFact * icnt;
    }
    else
    {
        ioFact = ioFact* icnt;

    }

   }
   return iEFact - ioFact;
}
int main()
{
    int ivalue = 0, iRet = 0;

    printf("Enter Number");
    scanf("%d",&ivalue);

    iRet = FactorialDiff(ivalue);

    printf("Factorial difference is %d ",iRet);

    return EXIT_SUCCESS;
}