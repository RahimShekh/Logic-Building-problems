#include<stdio.h>

void Display()  //static code hai
{
   int iCnt = 0;
   iCnt = 1;           //1
   while(iCnt<=5)      //2
   {                             
    printf("Jay hanuman...\n"); //4
    iCnt++;                  //3
   }
}
int main()
{

    Display();

    return 0;
}