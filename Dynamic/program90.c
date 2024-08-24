#include<stdio.h>
#include<stdlib.h>

int DisplayEvenAdd(int Arr[],int iSize)
{
    int i = 0;
    int iSum = 0;

    for(i = 0; i < iSize; i++)
    {
       if(Arr[i] % 2 == 0)
       {
          iSum = iSum + Arr[i];
       }
    }
    return iSum;
}
int main()
{
    int i = 0;
    int *Brr = NULL, iCount = 0,iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));

    printf("Enter the elements of Array:\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = DisplayEvenAdd(Brr,iCount);

    printf("The Addition of Even Elemtns is :%d",iRet);

    free(Brr);

    return 0;
}