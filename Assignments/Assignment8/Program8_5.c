#include<stdio.h>

void TableRev(int iNo)
{
    int icnt = 0;
    

    if(iNo <0)
    {
        iNo =-iNo;
    }
    for(icnt = 10; icnt>= 1; icnt--)
    {
         printf("%d\t",iNo*icnt);
    }
}

int main()
{
    int ivalue  = 0;

    printf("Enter Number");
    scanf("%d",&ivalue);

    TableRev(ivalue);

    return 0;
}