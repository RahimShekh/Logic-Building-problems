#include<stdio.h>

int CountVowels(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
       if((*str == 'A') || (*str == 'E') || (*str =='I') || (*str =='O') || (*str == 'U'))

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

    iRet = CountVowels(Arr);

    printf("The Vowels are:%d",iRet);
    return 0;
}