#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if(iStart > iEnd ||  iEnd < 0)
    {
        printf("Envalid Range");
        return 0;
    }
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
        
    }
    return iSum;
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting Points");
    scanf("%d",&iValue1);

    printf("Enter Ending Points");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is %d",iRet);

    return 0;
}