#include<Stdio.h>

void DisplayOddDigit(int iNo)
{
  if(iNo < 0)
  {
    iNo = -iNo;
  }

  int iDigit = 0;
  while(iNo != 0)
  {
    iDigit = iNo % 10;
    if(iDigit % 2 != 0)
    {
        printf("The odd digit is:%d\n",iDigit);
    }
    iNo = iNo/10;
  }
}
int main()
{
  int iValue = 0;

  printf("Enter the digit:");
  scanf("%d",&iValue);

  DisplayOddDigit(iValue);
  return 0;
}