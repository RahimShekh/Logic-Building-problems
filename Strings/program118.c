#include<stdio.h>

int Space(char *str)
{
    int iCount = 0;
    while(*str >= '\0')
    {
        if(*str == ' ')
        {
            iCount++;
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

    iRet = Space(Arr);

    printf("The Space count is:%d",iRet);
    return 0;
}