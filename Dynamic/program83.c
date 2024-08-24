#include<stdio.h>

int Display(int ptr[], int iSize)
{
    int i = 0;
    int iSum = 0;

    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + ptr[i];
    }
    return iSum;
}
int main()
{
    int Arr[5] = {10,20,30,40,50};
    int iRet = 0;
    int i = 0;

    for(i = 0; i < 5; i++)
    {
        scanf("%d",&Arr[i]);
    }

    iRet = Display(Arr,5);

    printf("The Addition is:%d",iRet);
    return 0;
}