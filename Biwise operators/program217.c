#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 33;
    unsigned int iResult = 0;

    printf("Enter the number:");
    scanf("%u",&iNo);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("The 4th bit and 6th bit is on");
    }
    else
    {
        printf("The 4th bit and 6th bit is off");
    }

    return 0;
}