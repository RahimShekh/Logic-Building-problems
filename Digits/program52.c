#include<Stdio.h>

void DisplayOddDigit(int iNo)
{
  if(iNo < 0)
  {
    iNo = -iNo;
  }

  int iDigit = 0;
  int iCount = 0;
  while(iNo != 0)
  {
    iDigit = iNo % 10;
    if(iDigit % 2 != 0)
    {
        iCount++;
    }
    iNo = iNo/10;
  }

  printf("The odd count is:%d",iCount);
}
int main()
{
  int iValue = 0;

  printf("Enter the digit:");
  scanf("%d",&iValue);

  DisplayOddDigit(iValue);
  return 0;
}