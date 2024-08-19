#include<stdio.h>

int SumOddDigit(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
        {
            iSum = iSum + iDigit;
        }
        iNo = iNo/10;
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the digit:");
    scanf("%d",&iValue);

    iRet = SumOddDigit(iValue);

    printf("The sum of Odd Digit is:%d",iRet);
    return 0;
}