#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[], int iSize)
{
    int i = 0;

    printf("Even Elements are:\n");
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            printf("%d\n",Arr[i]);
        }
    }
}
int main()
{
    int i = 0;
    int iCount = 0;
    int *Brr = NULL;

    printf("Enter the number:");
    scanf("%d",&iCount);

    Brr =(int*)malloc(iCount * sizeof(int));

    printf("Enter Elements of Array:\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    DisplayEven(Brr,iCount);

    free(Brr);

    return 0;
}