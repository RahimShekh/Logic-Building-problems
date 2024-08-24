#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iSize)
{
    int i = 0;
    int iFrequency = 0;

    for(i = 0;i < iSize; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iFrequency++;
        }
    }
    return iFrequency++;
}
int main()
{
    int i = 0;
    int *Brr = NULL;
    int iCount = 0, iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));

    printf("Enter the elements:\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = CountEven(Brr,iCount);

    printf("The Count of Even is:%d",iRet);

    free(Brr);

    return 0;
}