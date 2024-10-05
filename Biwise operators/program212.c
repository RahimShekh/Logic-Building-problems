#include<stdio.h>

int main()
{
    unsigned int No = 0;
    unsigned int iMask = 8, iResult = 0;

    printf("Enter the number:");
    scanf("%u",&No);

    iResult = No & iMask;

    if(iResult == iMask)
    {
        printf("4th bit is on");
    }
    else
    {
        printf("4th bit is off");
    }
    return 0;
}