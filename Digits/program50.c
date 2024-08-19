#include<Stdio.h>

void DisplayEvenDigit(int iNo)
{
  if(iNo < 0)
  {
    iNo = -iNo;
  }

  int iDigit = 0;
  while(iNo != 0)
  {
    iDigit = iNo % 10;
    if(iDigit % 2 == 0)
    {
        printf("The even digit is%d",iDigit);
    }
    iNo = iNo/10;
  }
}
int main()
{
  int iValue = 0;

  printf("Enter the digit:");
  scanf("%d",&iValue);

  DisplayEvenDigit(iValue);
  return 0;
}