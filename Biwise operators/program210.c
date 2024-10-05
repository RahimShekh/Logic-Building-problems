#include<stdio.h>

int main()
{
    int iValue1 = 0;
    int iValue2 = 0, iRet = 0;

    printf("Enter the first number:");
    scanf("%d",&iValue1);

    printf("Enter the second number:");
    scanf("%d",&iValue2);

    iRet = iValue1 | iValue2;

    printf("The Bitwise | is:%d",iRet);
    return 0;
}