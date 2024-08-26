#include<stdio.h>
#include<stdbool.h>

bool Display(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character:");
    scanf("%c",&cValue);

    bRet = Display(cValue);

    if(bRet == true)
    {
        printf("The character is Small");
    }
    else
    {
        printf("The character is not Small");
    }
    return 0;
}