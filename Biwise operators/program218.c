#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 257;
    unsigned int iResult = 0;

    printf("Enter the number:");
    scanf("%u",&iNo);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("1st bit and 9th bit is on");
    }
    else
    {
        printf("The bits are off");
    }

    return 0;
}