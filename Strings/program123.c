#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end !='\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
int main()
{
    char Arr[100];
    int iRet = 0;
    char gh = '\0';

    printf("Enter the string:");
    scanf("%[^'\n']s",&Arr);

    Reverse(Arr);

    printf("The reverse string is:%s",Arr);

    return 0;
}