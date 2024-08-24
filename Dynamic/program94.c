#include<stdio.h>
#include<stdlib.h>

int DisplayDiv(int Arr[], int iSize)
{
    int i = 0, iFrequency = 0;

    for(i = 0; i < iSize; i++)
    {
        if((Arr[i] % 3 == 0) && (Arr[i] % 5 == 0))
        {
            iFrequency++;
        }
    }
    return iFrequency;
}
int main()
{
    int i = 0;
    int iCount = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter the number:");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));

    printf("Enter the elements:\n");

    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = DisplayDiv(Brr,iCount);

    printf("the count is:%d",iRet);

    free(Brr);
    return 0 ;
}