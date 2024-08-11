#include<stdio.h>
#include<stdbool.h>

bool CheckRange(int iNo)
{
    if((iNo >= 30) && (iNo <= 50))  //logical operator 2 operand
    {
        return true;               //2 bhi condition true hone chahiye
    }                              //tabhi under jayega 
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);
    bRet = CheckRange(iValue);
    if(bRet == true)
    {   printf("YES\n");    }
    else
    {   printf("NO\n");     }
    
    return 0;
}