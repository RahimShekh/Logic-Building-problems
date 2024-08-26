#include<stdio.h>
#include<string.h>
int main()
{

    char Arr[100];

    printf("Enter the string:");
    scanf("%[^'\n']s",&Arr);

    strlen(Arr);

    printf("The length is:%d",strlen(Arr));
    return 0;
}