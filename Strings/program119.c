#include<stdio.h>

int Present(char *str)
{
    int iCount = 0;
    while(*str >= '\0')
    {
        if(*str == 'R')
        {
            
            return 1;
        }
        str++;
    }
   
    return iCount;
}
int main()
{
    char Arr[100];
    int iRet = 0;
    printf("Enter the String:");
    scanf("%[^'\n']s",&Arr);

    iRet = Present(Arr);

    if(iRet == 1)
    {
        printf("The element is present");
    }
    else
    {
        printf("The element is not present");
    }
    return 0;
}