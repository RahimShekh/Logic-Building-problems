#include<Stdio.h>

void DisplayDigit(int iNo)
{
  int iDigit = 0;
  int iCount = 0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }

  while(iNo != 0)
  {
    iDigit = iNo % 10;
    iCount++;
    printf("The reverse is:%d\n",iDigit);
    iNo = iNo /10;
  }
  printf("%d\n",iCount);
}
int main()
{
  int iValue = 0;

  printf("Enter the digit:");
  scanf("%d",&iValue);

  DisplayDigit(iValue);
  return 0;
}