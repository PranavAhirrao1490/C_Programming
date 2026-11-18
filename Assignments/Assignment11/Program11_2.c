#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int icnt = 0;

    if(iStart<iEnd)
    {
        printf("Invalid Range");
    }
    for(icnt=iStart; icnt>=iEnd; icnt++)
    {
      if(icnt %2 == 0)
      {
        printf("%d\t",icnt);
      }
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Staring Point");
    scanf("%d",&iValue1);

    printf("Enter Ending Point");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}