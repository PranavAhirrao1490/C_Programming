#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int icnt = 0;
    if(iStart<=0 || iEnd<=0 || iStart>iEnd)
    {
        printf("Invalid Range");
        return;
        
    }
    for(icnt = iEnd; icnt>= iStart; icnt--)
    {
        printf("%d ", icnt);
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter Ending Point");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}