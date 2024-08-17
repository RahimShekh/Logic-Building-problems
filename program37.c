#include<stdio.h>
#include<stdbool.h>

int CountFactors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    
    //      1          2          3
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)  //4
        {
            iCount++; //icount ki value 0 hai ab 1 hogi
        }
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountFactors(iValue);
    printf("Number of factors are : %d\n",iRet);

    return 0;
}
