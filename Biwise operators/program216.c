#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iResult = 0;
    unsigned int iMask = 2048;

    printf("Enter the number:");
    scanf("%u",&iNo);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("The 12 th bit is on");
    }
    else
    {
        printf("The 12 th bit is off");
    }

    return 0;
}