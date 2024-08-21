#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    if(iNo < 0)     // Updator
    {
        iNo = -iNo; // -(-28)
    }
    
    //      1           2               3
    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)  //(2 <= 5)
    {
        if((iNo % iCnt) == 0)   // 4   (11 % 4) == 0
        {
            bFlag = false;  //bFlag concept
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);
    if(bRet == true)
    {
        printf("%d is prime number \n",iValue);
    }
    else
    {
        printf("%d is not a prime number \n",iValue);
    }
    return 0;
}

// input = 11
// iNo/2 = 11/2 = 5.5 lekin we take only 5
// loop 6 ko rukega jab iCnt mein 6 hoga