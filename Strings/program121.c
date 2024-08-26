#include<stdio.h>
#include<stdbool.h>

int CharPresent(char *str,char ch)
{
    bool bFlag = false;
    int iCount = 1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
           
        }
        iCount++;
        str++; 
    }
    if(bFlag == true)
    {
        printf("The Character is Present in String\n");  
    }
    else
    {
        printf("The chracter is Absesnt\n");
    }
    return iCount;
}

   
int main()
{
    char Arr[100];
    bool bRet = false;
    char gh = '\0';
    int iRet = 0;

    printf("Enter the String:");
    scanf("%[^'\n']s",&Arr);

    printf("Enter the chracter u want search:\n");
    scanf(" %c",&gh);

    iRet = CharPresent(Arr,gh);

    printf("The position of that chracter is:%d",iRet);

    
    return 0;
}