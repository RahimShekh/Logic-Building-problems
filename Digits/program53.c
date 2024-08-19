#include<Stdio.h>

int DisplayDigit(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 5)
        {
            iCount++;
        }
        iNo = iNo /10;
    }
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the digit:");
    scanf("%d",&iValue);

    iRet = DisplayDigit(iValue);

    printf("The count of digit greater than 5 is :%d",iRet);
    return 0;
}