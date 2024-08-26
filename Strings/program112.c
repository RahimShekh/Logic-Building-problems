#include<Stdio.h>

int Display(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        iCount++;
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

    iRet = Display(Arr);

    printf("The String length is:%d",iRet);
    return 0;
}