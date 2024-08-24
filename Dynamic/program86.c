#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[], int iSize)
{
    int i = 0;
    int iSum = 0;

    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
   return iSum;
}
int main()
{
    int *Brr = NULL;
    int iCount = 0;
    int i = 0, iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int*));

    printf("Enter the Elements of Array:\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }
    iRet = Addition(Brr,iCount);

    printf("Addition is:%d",iRet);

    free(Brr);
    return 0;
}