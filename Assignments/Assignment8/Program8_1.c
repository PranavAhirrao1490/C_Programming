#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {

        printf("small");

    }
    else if((iNo > 100) && (iNo < 100))
    {
        printf("medium");
    }
    else if(iNo > 100)
    {
        printf("Large");
    } 

}

int main()
{
    int ivalue = 0;

    printf("Enter Number");
    scanf("%d",&ivalue);

    Number(ivalue);

    return 0;
}