#include<Stdio.h>
#include<stdlib.h>

void Reverse(int Arr[],int iSize)
{
    int i = 0;
    int iStart = 0;
    int iEnd = iSize - 1;
    int temp = 0;

    while(iStart < iEnd)
    {
        temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}
int main()
{
    int i = 0;
    int iCount = 0;
    int *Brr = NULL;

    printf("Enter the number:");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));

    printf("Enter the elements:\n");

    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    Reverse(Brr,iCount);
    
    printf("The Reverse elements are:\n");

    for(i = 0; i < iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }
    free(Brr);
    return 0;
}