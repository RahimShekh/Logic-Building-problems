#include<stdio.h>

int Display(char *str,char ch)
{
    int iCnt = 1;
    int iPos = 1;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;
        }
        iCnt++;
        str++;
    }
    return iPos;
}
int main()
{
    char Arr[100];
    int iRet = 0;
    char gh = '\0';

    printf("Enter the string:");
    scanf("%[^'\n']s",&Arr);

    printf("Enter the element u want to search:");
    scanf(" %c",&gh);

    iRet = Display(Arr,gh);

    printf("The last occurence is:%d\n",iRet);

    return 0;
}