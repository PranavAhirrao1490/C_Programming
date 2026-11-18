#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int icnt = 0, iSum = 0;

    if(iStart<=0 || iEnd<=0 || iStart>iEnd)
    {
        printf("Invalid Range");
        return 0;
    }
    for(icnt =iStart; icnt<=iEnd; icnt++)
   {
       iSum = iSum + icnt;
   }
   return iSum;

    
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    
    printf("Enter Starting Point");
    scanf("%d",&iValue1);

    printf("Enter Ending Point");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is : %d",iRet);
    

    return 0;
}