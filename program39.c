/*Accept number as no
search all its factors
perform addition of all the factors
if addition is same as no
then Display as no is perfect number
otherwise Display as no is not perfect number
*/
#include<stdio.h>
#include<stdbool.h>

bool CheckNumber(int iNo)
{
    int iCnt = 0,iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
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
//6 is the first perfect number 
// 6 che factors are 1,2,3
//28 is perfect number