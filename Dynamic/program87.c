#include<stdio.h>
#include<stdlib.h>

int EvenDisplay(int Arr[], int iSize)
{
    int i = 0;
    int iCnt = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 == 0)
        {
           iCnt++;
        }
    }
    return iCnt;
}
int main()
{
    int *Brr = NULL;
    int i = 0;
    int iCount = 0, iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int*));

    printf("Enter the elements of Array:\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = EvenDisplay(Brr,iCount);

    printf("The Even elements are:%d",iRet);

    free(Brr);
    return 0;
}
