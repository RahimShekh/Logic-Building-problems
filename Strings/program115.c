#include<stdio.h>

int Small(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    printf("Enter the string:");
    scanf("%[^'\n']s",&Arr);

    iRet = Small(Arr);

    printf("The small are in the String:%d",iRet);
    return 0;
}