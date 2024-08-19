#include<Stdio.h>

int CountEvenDigit(int iNo)
{
  int iDigit = 0;
  int iCount = 0;
  while(iNo > 0)
  {
    iDigit = iNo % 10;
    if(iDigit % 2 == 0)
    {
        iCount++;
    }
    iNo = iNo / 10;
  }
  return iCount;
}
int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("Enter the digit:");
  scanf("%d",&iValue);

  iRet = CountEvenDigit(iValue);

  printf("The Even count is:%d",iRet);
  return 0;
}