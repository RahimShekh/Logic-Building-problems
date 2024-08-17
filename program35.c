// take the number from user and print the factors of that number
#include<stdio.h>
// time complexity = O(n)
void DisplayFactor (int iNo)
{
  int iCnt = 0;
   
  printf("Factors of %d are:\n",iNo);
  for(iCnt = 1; iCnt < iNo;iCnt++)
  {
    if((iNo % iCnt) == 0)// iske jagh pe loop mein iNo/2 karo
    printf("%d\n",iCnt);
  }
}
int main()
{
    int iValue = 0; 

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}