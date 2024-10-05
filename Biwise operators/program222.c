#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iResult = 0;
    unsigned int iMask = 0x00000120;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("6th bit and 9th bit is on");
    }
    else
    {
        printf("bits are off");
    }
    return 0;
}