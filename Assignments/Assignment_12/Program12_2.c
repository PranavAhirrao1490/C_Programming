#include<stdio.h>

#define True 1
#define False 0

typedef int Bool;

Bool ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo <0)
    {
        iNo = -iNo;
    }
    while(iNo >0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0);
        {
            return True;
        }
        iNo = iNo / 10;
    }
    return False;
}
int main()
{
    int iValue = 0;
    Bool bRet = False;

    printf("Enter Number");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == True)
    {
        printf("it Contains Zero");
    }
    else
    {
        printf("There is no zero");
    }
    return 0;

}