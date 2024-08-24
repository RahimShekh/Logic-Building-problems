#include<stdio.h>

int Display(int Arr[], int iSize)
{
    int i = 0;
    int iSum = 0;

    for(i = 0; i < 5; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}
int main()
{
    int Brr[5];
    int i = 0, iRet = 0;

    printf("Enter the elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = Display(Brr,5);

    printf("%d",iRet);
    return 0;
}