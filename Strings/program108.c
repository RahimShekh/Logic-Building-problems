#include<stdio.h>
#include<stdbool.h>

void Display(char ch)
{
    if((ch >= '0') && (ch <= '9'))
    {
        printf("It is a Digit");
    }
    else
    {
       printf("It is not a digit");                
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}