#include<stdio.h>
#include<stdbool.h>

bool Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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
        printf("The character is Capital");
    }
    else
    {
        printf("The chracters is not capital");
    }
    return 0;
}