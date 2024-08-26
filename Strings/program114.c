#include<stdio.h>

int Capital(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    iRet = Capital(Arr);

    printf("The capital are in the String:%d",iRet);
    return 0;
}