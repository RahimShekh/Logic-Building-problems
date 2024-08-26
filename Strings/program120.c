#include<stdio.h>
#include<stdbool.h>

bool CharPresent(char *str,char ch)
{
    bool bFlag = false;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
        }
        str++;
    }
    return bFlag;
}
int main()
{
    char Arr[100];
    bool bRet = false;
    char gh = '\0';

    printf("Enter the String:");
    scanf("%[^'\n']s",&Arr);

    printf("Enter the chracter u want search:\n");
    scanf(" %c",&gh);

    bRet = CharPresent(Arr,gh);

    if(bRet == true)
    {
        printf("The Character is Present in String");
    }
    else
    {
        printf("The chracter is Absesnt");
    }
    return 0;
}