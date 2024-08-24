#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Brr = NULL;
    int i = 0, iRet = 0;
    int iCount = 0;

    printf("Enter the number:");
    scanf("%d",&iCount);

    Brr =(int*)malloc(iCount * sizeof(int));
    printf("Enter the elements:\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    printf("Entered elements are:\n");
    for(i = 0; i < iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }
   
    return 0;
}