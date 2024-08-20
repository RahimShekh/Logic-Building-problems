#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int i = 0, j = 0;

   for(i = 1; i <= iRow; i++)
   {
       for(j = 1; j <= iCol; j++)
       {
         if(i == j)
         {
            printf("$\t");
         }
         else
         {
            printf("%d\t",j);
         }
       }
       printf("\n");
   }
    
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the rows:");
    scanf("%d",&iValue1);

    printf("Enter the columns:");
    scanf("%d",&iValue2);

    DisplayPattern(iValue1,iValue2);
    return 0;
}