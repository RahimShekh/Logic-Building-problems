#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;      
        printf("%d",iDigit);                          
        iDigit = iNo / 10;      
    }     
}
int main()
{
    int iValue = 0;

    printf("Enter the digit:");
    scanf("%d",&iValue);

    DisplayDigits(iValue);
    return 0;
}
