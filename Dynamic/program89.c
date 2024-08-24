#include<stdio.h>
#include<stdlib.h>

void DisplayOdd(int Arr[],int iSize)
{
    int i = 0;
    printf("The Odd Elements are:\n");
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            printf("%d\n",Arr[i]);
        }
    }
}
int main()
{
    int i = 0;
    int *Brr = NULL;
    int iCount = 0;

    printf("Enter the number:");
    scanf("%d",&iCount);

    Brr =(int*)malloc(iCount * sizeof(int));

    printf("Enter the elements in Array:\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    DisplayOdd(Brr,iCount);

    return 0;
}