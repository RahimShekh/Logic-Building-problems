#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0,iCount = 0;

    if(iNo < 0)   // updator
    {
     iNo = -iNo;  //-(-28) plus hoyega
    }
    
    for(iCnt = 2; iCnt <=(iNo/2);iCnt++) // 1 is factor of everyone
    {
        if((iNo % iCnt) == 0)
        {
            iCount++; // agar tumko rukna hai loop mein 
            break;    // toh break use karo
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
        printf("%d is perfect number\n",iValue);
    }
    else{
        printf("%d is not a perfect number\n",iValue);
    }
    return 0;
}

//break keyword is used to optimize the code also