#include<stdio.h>
#include<stdlib.h>

int IncreaseNum(int Arr[],int iSize)
{
    int i = 0;
   
    printf("The Data after updation is:\n");
    
    for(i = 0; i < iSize; i++)
    {
        Arr[i]++;
        printf("%d\n",Arr[i]);
    }
    
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

    iRet = IncreaseNum(Brr,iCount);

    

    free(Brr);

    return 0;
}