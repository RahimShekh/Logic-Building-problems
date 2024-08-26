#include<stdio.h>

int main()
{
    char Arr[100];

    printf("Enter the Name:");
    scanf("%[^'\n']s",Arr);

    printf("Entered Name is :%s",Arr);
    
    return 0;
}