#include<stdio.h>

int Factorial(int iNo)
{
    int icnt = 0;
    int ifact = 1;

    if(iNo < 0)
    {
        return 0;
    }
    for(icnt = 1; icnt <= iNo; icnt++)
    {
        ifact = ifact * icnt;
    }
    return ifact;
}

int main()
{
    int ivalue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d",&ivalue);

    iRet = Factorial(ivalue);

    printf("Factorial of number is %d",iRet);

    return 0;

}