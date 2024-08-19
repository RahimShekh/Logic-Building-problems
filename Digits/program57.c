#include<stdio.h>

int Reverse(int iNo)
{
   int iDigit = 0;
    int iRev = 0;

   while(iNo != 0)
   {
     iDigit = iNo % 10;
     iRev = (iRev * 10) + iDigit;
     iNo = iNo / 10;
   } 
   return iRev;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the digit:");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("The reverse digit is:%d",iRet);

    return 0;
}