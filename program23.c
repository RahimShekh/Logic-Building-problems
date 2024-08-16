#include<stdio.h>

void Display(int iNo)  //dynamic code hai
{                     //matlab user se input leta
   int iCnt = 0;
   iCnt = 1;           //1
   while(iCnt<=iNo)      //2
   {                             
    printf("Jay hanuman...\n"); //4
    iCnt++;                  //3
   }
}
int main()
{
    int ivalue = 0;

    printf("Enter the number:\n");
    scanf("%d",&ivalue);
     
    Display(ivalue);

    return 0;
}