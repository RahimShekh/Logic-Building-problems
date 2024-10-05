#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 0x00000100;
    unsigned int iResult = 0;

    printf("Enter the number:");
    scanf("%u",&iNo);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("The 9th bit is on");
    }
    else
    {
        printf("The bit is off");
    }
    return 0;
}