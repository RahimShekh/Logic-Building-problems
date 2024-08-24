#include<stdio.h>
#include<stdlib.h>

int DisplayFreq(int Arr[],int iSize, int iNo)
{
    int i = 0;
    int iFrequency = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            return 1;
        }
    }
    return 2;
}
int main()
{
    int i = 0,iCount = 0;
    int *Brr = NULL;
    int iValue = 0,iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));

    printf("Enter the elements:\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    printf("Enter the elements u wants to search:");
    scanf("%d",&iValue);

    iRet = DisplayFreq(Brr,iCount,iValue);

    if(iRet == 1)
    {
        printf("The Element is present in array");
    }
    else if( iRet == 2)
    {
        printf("The Element is not in Arrray");
    }

    free(Brr);
    return 0;
}