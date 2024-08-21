
#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0,iCount = 0;

    if(iNo < 0)   // updator
    {
     iNo = -iNo;  //-(-28) plus hoyega
    }
    
    for(iCnt = 2; iCnt <=(iNo/2);iCnt++) // icnt 2 se start hua kyuki 1 se sabko bhag jayega
    {
        if((iNo % iCnt) == 0)
        {
            iCount++;
        }
    }
    if(iCount == 0)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);
    if(bRet == true)
    {
        printf("%d is prime number\n",iValue);
    }
    else{
        printf("%d is not a prime number\n",iValue);
    }
    return 0;
}
//3,5,7,9 are the prime numbers