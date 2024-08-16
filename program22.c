#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;
   //     1      2        3
   for(iCnt = 1;iCnt<=iNo;iCnt++)  //iNo main input jara toh agar 5 input
   {                               //liya toh 5 bar count hoga 
    printf("Jay hanuman...\n"); //4
   }
}
int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}