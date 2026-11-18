#include<stdio.h>

void Display(int iNo)
{
    int ivalue = 0;
    {
    printf("Enter single  digit number");
    scanf("%d",&iNo);
    }

    switch (iNo)
    {
        case 0:

            printf("Zero\n");
            break;

        case 1:
           printf("one\n");
           break;

           case 2:
           printf("Two\n");

           case 3:
           printf("Three\n");
           break;

           case 4:
           printf("four\n");
           break;

           case 5:
           printf("five\n");
           break;

           case 6:
           printf("six\n");
           break;

           case 7:
           printf("seven\n");
           break;
            
           case 8:
           printf("eigst\n");
           break;

           case 9:
           printf("nine\n");
           break;
        
           default:
           printf("Invlid number");
           break;
        }

}
int main()
{
    int ivalue = 0;

    printf("Enter Number");
    scanf("%d",&ivalue);

    Display(ivalue);
    return 0;
}