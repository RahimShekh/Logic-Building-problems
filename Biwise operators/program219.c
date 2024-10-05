#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 0x00000020; // hexadecimal
    unsigned int iResult = 0;

    printf("Enter the number:");
    scanf("%u",&iNo);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("6th bit is on");
    }
    else
    {
        printf("6th bit is off");
    }
    return 0;
}