#include<stdio.h>
#include<stdbool.h>

bool CheckNumber(int iNo)
{
    int iCnt = 0,iSum = 0;

    if(iNo < 0)   // filter
    {
        printf("please enter positive numbers only\n");
        return false;
    }
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt ==0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bRet = CheckNumber(iValue);
    if(bRet == true)
    {
        printf("%d is perfect number\n",iValue);
    }
    else{
        printf("%d is not a perfect number\n",iValue);
    }
    return 0;
}